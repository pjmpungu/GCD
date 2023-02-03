#include <stdlib.h>
#include <stdio.h>
#include "iterative.h"
#include "recursive.h"

int main(int argc, char **argv){

	//first test to see number of command line args
	if(argc != 3) {
		printf("Usage: ./gcd <integer m> <integer n>\n");
		return EXIT_FAILURE;
	}
	
	//now we may solve the user inputs
	
	int m = atoi(argv[1]);
	int n = atoi(argv[2]);
	
	int iterative_gcd = gcd_iterative(m, n);
	int recursive_gcd = gcd_recursive(m, n);
	
	printf("Iterative: gcd(%d, %d) = %d\n", m, n, iterative_gcd);
	printf("Recursive: gcd(%d, %d) = %d\n", m, n, recursive_gcd);
	
	return EXIT_SUCCESS;
}

