#pragma once

#include "utils.hpp"
#include "ride.hpp"
#include "input.hpp"

class Checker
{
	public:
	long long maxScore;
	long long lastScore;
	long long SimulateCar( const std::vector< int > & );
	long long SimulateFleet( const std::vector< std::vector< int > > & );
};

extern Checker checker;
