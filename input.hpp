#pragma once
/* A structure that will store the information from the standart input */

#include <iostream>
#include <vector>

#include "ride.hpp"

struct World
{
	unsigned long long rows, columns;
	long long bonus;
	unsigned long long fleetSize;
	unsigned long long numRides;
	unsigned long long steps;

	std::vector< Ride > allRides;

	void Input( std::istream & );
}world;
