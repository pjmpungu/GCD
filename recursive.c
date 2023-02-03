#include <stdlib.h>
#include <stdio.h>

#include "recursive.h"

int gcd_recursive(int m, int n){
	
	//first test if 2 numbers = 0
	if(m == 0 && n ==0){
		printf("gcd(0, 0) = undefined\n");
		exit(EXIT_FAILURE); 
	}
	
	//otherwise use recursion to find gcd
	
	m = abs(m);
        n = abs(n);
	
	//determine biggest and smallest of the two
	
	if(n == 0){
		return m;
	}else{
		return gcd_recursive(n, m%n);
	}
	
}
