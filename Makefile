#Search pathes
VPATH		= ./source ./source/tinyxml
#Compilers and flags
FC		= g77
FFLAGS		= -fugly-logint -fno-backslash -fno-automatic
CXX		= g++
CXXFLAGS	=
LD		= g++
LDFLAGS		= 
LIBS		= -lg2c
AR		= ar
ARFLAGS		= rcs
#Includes and libraries
INCLUDE		= -I./include
FASTEJETINCLUDE	= -I./fastjet/include

ROOTFLAGS	= $(shell root-config --nonew --cflags)

ROOTLIBS	= $(shell root-config --nonew --libs)
CERNLIBS	= $(shell cernlib packlib,mathlib,kernlib)
FASTJETLIBS     = -L./fastjet/lib -lfastjet

CXXFLAGS	+= $(ROOTFLAGS) 
CXXFLAGS	+= $(FASTEJETINCLUDE)

#Distanation path
DIST_DIR	= .
DIST_DATA_DIR	= $(DIST_DIR)/DATA
DIST_MC_DIR	= $(DIST_DIR)/MC
#Compilation modes
MODE		=
DEBUG		= -Wall -O -O0 -ggdb
OPTIMIZE	= -O -O2
#date and time of make execution

DATE		:= $(shell date +\%F_%k-%M-%S)
VERSION		= 0.1
ifeq ($(MODE),debug)
  CXXFLAGS	+= $(DEBUG)
else
  CXXFLAGS	+= $(OPTIMIZE)
endif

#relink target
RELINKTARG	= DATA
DEPENDENCIES	= 
ifeq ($(RELINKTARG),MC)
  CXXFLAGS      += -DMC
  DEPENDENCIES	+= JetEvent_True.o Jets_Hadr.o Jets_Part.o TS_ZVTXRW.o
endif
#Targets
all: main.exe
	@echo "Building analysis"

main.exe: Dijets.o Analysis.o Analysis_Event.o Analysis_Initialize.o Analysis_BookHistograms.o Analysis_BookBranches.o Variables_$(RELINKTARG).o JetEvent.o \
          Cuts.o Excludedrunlist.o poltake.o runinfo.o Jets.o JetUserInfo.o JetSelectors.o EtCorrections.o EtTransformer.o DijetVariables.o TrijetVariables.o $(DEPENDENCIES) Settings.o tinystr.o tinyxml.o tinyxmlerror.o tinyxmlparser.o main.o
	$(LD)	$(LDFLAGS) $(ROOTLIBS) $(FASTJETLIBS) $^ -o $@

.cpp.o:
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $<
.cc.o:
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $<
.C.o:
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $<
.f.o:
	$(FC) $(FFLAGS)	-c $<


.PHONY: clean cleanall tar doc main relink
relink: 
	-@echo "Relinking to $(RELINKTARG)"
	-@unlink ./include/Variables.h
	-@ln -s Variables_$(RELINKTARG).h ./include/Variables.h
clean:	
	-@rm -f *.o
	-@rm *~ ./source/*~ ./include/*~ 
	@echo CLEANED

cleanall:
	-@rm -f *.o *.exe
	@echo CLEANED

tar: source include lib util Makefile readme
	@tar -zcvf backup$(VERSION)_$(DATE).tgz $^
	@echo BACKUP HAS BEEN CREATED IN $(DATE)


