#include <stdio.h>

// Function to calculate GCD using iteration
int gcd_iteration(int a, int b) {
    int temp;
    while(b != 0) {
        temp = b; 
        b = a % b; 
        a = temp;
    }
    return a;
}

// Function to calculate GCD using recrusion
int gcd_recursive(int a, int b){
    if(b == 0) {
        return a;
    } else {
        return gcd_recursive(b,a%b);
    }
}

int main(int argc, char **argv) {
    // Creating the variables that will adopt the user input
    int a, b;
    
    // Asking user for first input
    printf("Input the first interger: ");
    scanf("%d", &a);
    
    // Loop that makes sure that the value is positive and also a number
    if (a <= 0) {
        printf("Invalid value inputted, aborting\n");
        return 1;
    }
    
    // Asking user for second input
    printf("\nInput the second interger: ");
    scanf("%d", &b);
    if (b <= 0) {
        printf("Invalid value inputted, aborting\n");
        return 1;
    }

    printf("The GCD using Recursive is: %d\n", gcd_recursive(50, 51)); 
    printf("The GCD using Iteration is: %d\n", gcd_iteration(50, 51));
    return 0;
}
