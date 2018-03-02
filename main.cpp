#include <iostream>

#include "input.hpp"
#include "checker.hpp"

int main()
{
	world.Input( std::cin );

	std::vector< std::vector< int > > sol(world.fleetSize);
	for( size_t i=0;i<world.fleetSize;i++ )
	{
		int size;
		std::cin>>size;
		for( int j=0;j<size;j++ )
		{
			int temp;
			std::cin>>temp;
			sol[i].push_back(temp);
		}
	}

	Checker ch;
	std::cout<<ch.SimulateFleet( sol )<<"\n";

}
