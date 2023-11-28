#include <stdio.h>
#include <stdlib.h>

// Function that produces the fibonacci sequence based on the number inputted by the user
void fibonacci(int *a, int *b);

int main(int argc, char **argv) {
    // Defining the variables to be used 
    int n, i;
    
    // Declaring the first 2 variables of the fibonacci sequence 
    int f0 = 0, f1 = 1;
    
    // Code used to ask for user input 
    printf("Enter the value of n for the Fibonacci series: ");
    scanf("%d", &n);
    
    /// The Fibonacci series is only valid from numbers 1 or greater so this error
    // is necessary to prevent certain inputs.
    if(n < 1) {
        printf("Please enter a positive value. \n");
        exit(-1);
    }
    
    printf("The Fibonaccis sequence observed at %d is: \n", n);
    printf("%d  ", f0);
    
    // Only print F1 if n is greater than 1
    if (n > 1) {
        printf("%d  ", f1);
    }
    
    // Here the Fibonacci series can be calculated using the fibonacci function
    for (i = 2; i <= n; i++) {
        fibonacci(&f0, &f1);
        printf("%d  ", f1);
        if((i+1)%10 == 0) {
            printf("\n");
        }
    }
    printf("\n");
    
    return 0;
}

void fibonacci(int *a, int *b) {
    // this next variable describes the next Fn in the fibonacci formula  fn = fn-1 + fn-2
    // a will be used to describe the fn-1 and b to describe fn-2
    int next;
    next = *a + *b;
    *a = *b;
    *b = next;
}
