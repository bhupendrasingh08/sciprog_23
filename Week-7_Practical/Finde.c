// Find e using Taylor series expansion for e^x
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Initialise prototypes of functions
int factorial(int n);

int main(int argc, char **argv) {
    int i, order;
    double e, *terms;
    
    printf("Please enter your desired polynomial order\n");
    
    if(scanf("%d", &order) != 1){
        printf("Inputs must be a number\n");
        return 1;
    }
    
    //We will establish an array with allocates space based on n. 
    terms = malloc(order * sizeof(double));
    
    // Now the array elements will be filled in.
    for(i = 0; i < order; i++){
        terms[i] = 1.0 / (double)factorial(i+1);
        printf("e term for order %d is %1.14lf \n", i+1, terms[i]);
    }
    
    // Now simply compute the formula starting off with e = 1 as
    // this will always be the first term. Then each of the other
    // terms in can be calculated using the terms[i] array.
    e = 1.0;
    for(i = 0; i < order; i++){
        e = e + terms[i];
    }

    free(terms);
    
    // Here we are printing e with 10 figures of scientific notation
    // followed by the difference between the true e value and the one
    // which we have calculated.
    printf("e is estimated as %.10lf, with difference %e\n", e, e - exp(1.0));
    
    return 0;
}

// Function to calculate factorial
int factorial(int n) {
    if(n < 0){
        printf("Error: The number you have input is negative:.\n");
        return(-1);
    } else if(n==0){
        return 1;
    } else{
        return(n * factorial(n - 1));
    }
}