#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

#include "input.hpp"
#include "checker.hpp"

inline void Output( const std::string &outputFile, const std::vector< std::vector< int > > sol )
{
	std::ofstream output(outputFile);
	for( size_t i=0;i<sol.size();i++ )
	{
		output<<sol[i].size()<<" ";
		for( size_t j=0;j<sol[i].size();j++ )
			output<<sol[i][j]<<" ";
		output<<std::endl;;
	}
	output.close();
}

int main()
{
	std::string inputFile = "a_example.in";
	std::cerr<<"Enter input file: ";
	std::cin>>inputFile;

	std::string outputFile = "solution.out";
	std::cerr<<"Enter output file: ";
	std::cin>>outputFile;

	std::ifstream input( inputFile );
	world.Input( input );

	/* Create an empty solution */
	std::vector< std::vector< int > > sol(world.fleetSize);
	/* Copy(in order to preserve the original order) and sort all the rides, based on the latest starting time */
	std::vector< Ride > orderedRides = world.allRides;
	std::sort( orderedRides.begin(), orderedRides.end(), []( const Ride &a, const Ride &b ){ return a.latestStart< b.latestStart; } );
	/* Greedy-ly assign the rides */
	for( size_t i=0;i<world.allRides.size();++i )
		sol[ i % world.fleetSize ].push_back( orderedRides[i].id );

	long long max = checker.SimulateFleet( sol );
	std::cerr<<"Start score: "<<max<<"\n";
	Output( outputFile, sol );

	while( true )
	{
		/* Apply a random mutation and check if it improved the score */
		std::vector< std::vector< int > > newSol = sol;
		size_t fleet = std::rand()%world.fleetSize;
		size_t pos1 = std::rand()%newSol[fleet].size();
		size_t pos2 = std::rand()%newSol[fleet].size();
		std::swap( newSol[fleet][pos1], newSol[fleet][pos2] );
		long long score = checker.SimulateFleet( newSol );
		if( score > max )
		{
			max = score;
			sol = newSol;
			std::cerr<<"New max score: "<<max<<"\n";

			Output( outputFile, sol );
		}
	}
}
