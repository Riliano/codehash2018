#pragma once
/* Structure that will store all we need to know about a single ride */

#include "utils.hpp"

struct Ride
{
	Point from, to;
	unsigned int start, end;	
	long long dist;

	Ride( const Point &, const Point &,
	      const unsigned int &, const unsigned int & );
};