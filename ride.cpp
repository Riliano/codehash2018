#include "utils.hpp"
#include "ride.hpp"

Ride::Ride( const Point &mFrom, const Point &mTo,
            const unsigned int &mStart, const unsigned int &mEnd )
{
	from = mFrom;
	to = mTo;
	start = mStart;
	end = mEnd;
	dist = MDistance( from, to );
}
