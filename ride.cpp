#include "utils.hpp"
#include "ride.hpp"

Ride::Ride( const Point &mFrom, const Point &mTo,
            const unsigned int &mStart, const unsigned int &mEnd,
			const int &mId )
{
	id = mId;
	from = mFrom;
	to = mTo;
	start = mStart;
	end = mEnd;
	dist = MDistance( from, to );
	latestStart = end-dist;
}
