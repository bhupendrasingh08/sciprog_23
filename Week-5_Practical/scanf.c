#include <stdio.h>

int main(int argc, char **argv) {
    int i, ierr; 
    double a;
    
    printf("Enter an int and double\n");
    ierr = scanf("%d %lf",&i,&a);
    
    if(ierr != 2) printf("Problem with input");
    return 0;
}