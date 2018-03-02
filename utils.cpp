#include "utils.hpp"

Point::Point()
{
	x = 0;
	y = 0;
}
Point::Point( const long long &myX, const long long &myY )
{
	x = myX;
	y = myY;
}

long long MDistance( const Point &from, const Point &to )
{
	long long part1 = from.x - to.x;
	if( part1 < 0 )
		part1 = -part1;
	
	long long part2 = from.y - to.y;
	if( part2 < 0 )
		part2 = -part2;

	return part1+part2;
}
