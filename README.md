# codehash2018
A solution for the Google's code hash 2018 qualification round.(Written during the extended round)
This si a "pseudo-genetic algorithm" solution:
First it distributes all rides in a greedy fashion, then it mutates this solution in order to improve the score.

So this code can very quickly produce a bad solution, but given some time the score will improve(except on examples a nd b)
With this solution and a not-so-unrisanble amount of time I managed to score a total of  38,976,191 points.

# Compilation and usage
Compile and start with
 ```
  make
  ./codehash2018
 ```
after which you will be prompted to enter an input file and an output file, where the solution will be stored
