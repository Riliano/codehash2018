#include <iostream>
#include <vector>

#include "ride.hpp"
#include "input.hpp"

void World::Input( std::istream &stream )
{
	stream>>rows>>columns>>fleetSize>>numRides>>bonus>>steps;
	allRides.reserve( fleetSize );
	for( size_t i=0; i < fleetSize; ++ i )
	{
		Point a, b;
		unsigned int s, e;
		stream>>a.x>>a.y>>b.x>>b.y>>s>>e;
		Ride newRide( a, b, s, e );
		allRides.push_back( newRide );
	}
}
