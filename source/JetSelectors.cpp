#include "JetSelectors.h"

#include "fastjet/Selector.hh"

Selector KinematicJetLabSelector( const float & etjetmin, const float & etajetmin, const float & etajetmax )
{
	return Selector( new JetLabSelector( etjetmin, etajetmin, etajetmax ) );
}

Selector KinematicBackwardJetSelector( const float & etjetmin, const float & etajetmin )
{
	return Selector( new BackwardJetSelector( etjetmin, etajetmin ) );
}

Selector MinBreitEt( const float & etjetmin )
{
	return Selector( new BreitEtJetSelector( etjetmin ) );
}
