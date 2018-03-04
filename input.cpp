#include <iostream>
#include <vector>

#include "ride.hpp"
#include "input.hpp"

void World::Input( std::istream &stream )
{
	stream>>rows>>columns>>fleetSize>>numRides>>bonus>>steps;
	allRides.reserve( numRides );
	for( size_t i=0; i < numRides; ++ i )
	{
		Point a, b;
		unsigned int s, e;
		stream>>a.x>>a.y>>b.x>>b.y>>s>>e;
		Ride newRide( a, b, s, e, i );
		allRides.push_back( newRide );
	}
}

World world;
