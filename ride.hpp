#pragma once
/* Structure that will store all we need to know about a single ride */

#include "utils.hpp"

struct Ride
{
	int id;
	Point from, to;
	unsigned long long start, end;	
	unsigned long long latestStart;
	long long dist;

	Ride( const Point &, const Point &,
	      const unsigned int &, const unsigned int &,
		  const int & );
};
