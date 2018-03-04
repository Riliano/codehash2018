#include <algorithm>

#include "utils.hpp"
#include "ride.hpp"
#include "input.hpp"
#include "checker.hpp"

long long Checker::SimulateCar( const std::vector< int > &rideList )
{
	long long score = 0;

	unsigned long long time = 0; 
	Point curPos;

	for( size_t i=0; i < rideList.size(); ++ i )
	{
		Ride curRide = world.allRides[ rideList[i] ];
		unsigned long long arrive =	time + MDistance( curPos, curRide.from );
		if( arrive <= curRide.start )
			score += world.bonus;
		time = std::max( curRide.start, arrive );
		time += curRide.dist;
		if( time <= curRide.end )
			score += curRide.dist;
		curPos = curRide.to;
	}

	return score;
}

long long Checker::SimulateFleet( const std::vector< std::vector< int > > &rideList )
{
	long long score = 0;
	for( size_t i=0; i < rideList.size(); ++ i )
		score += SimulateCar( rideList[i] );
	
	lastScore = score;
	if( score > maxScore )
		maxScore = score;

	return score;
}

Checker checker;
