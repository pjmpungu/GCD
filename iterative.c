#include <stdlib.h>
#include <stdio.h>

#include "iterative.h"

int gcd_iterative(int m, int n){

	//first test if 2 numbers = 0
	if(m == 0 && n ==0){
		printf("gcd(0, 0) = undefined\n");
		exit(EXIT_FAILURE); 
	}
	
	//otherwise use iterative method with while loop
	
	m = abs(m);
        n = abs(n);
	
	//determine biggest and smallest of the two
	
	if(m < n){
		int temp = m;
		m = n;
		n = temp;
	}
	
        int remainder = m%n;

        while(remainder != 0){
            m = n;
            n = remainder;
            remainder = m%n;
        }
        return n;
	
}
