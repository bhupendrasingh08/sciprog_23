#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
    // Initialise all the variables required
    int N = 12;
    double x_0 = 0.0;
    double x_12 = M_PI/3.0;
    double width = (x_12 - x_0) / (double) N;
    
    // Get the firt part of the sum tan(0) + tan(pi/3).
    double X = tan(x_0) + tan(x_12);
    
    // Loop over equidistant points between 0 -> pi/3 and sum 2*tan(x) for each point
    double x, y, sum = X;
    int i = 1;
    while(i < 12) {
        x = x_0 + width * i;
        y = tan(x);
        sum += 2*y;
        i++;
    }
    
    double integral_approx = sum * width * 0.5;
    double integral_exact = log(2.0);
    
    printf("Approximation of integral from x = 0 to x = pi/3 of the function tan(x) with respect to x is:\n%.5f\nThe exact solution is:\n%.5f\n", integral_approx, integral_exact);
    return 0;
}