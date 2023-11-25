#include <stdio.h>
#include <math.h>

#define N 12

// Array with tan(x) values
double tanVal[N + 1];

double degreeToRadian(double degree);

void calculateTanValues();

double calculateArea(int num);

double trapezoidalRule();

int main(int argc, char **argv) {
    calculateTanValues();
    double integral_approx = trapezoidalRule();
    double integral_exact = log(2.0);
    printf ("Approximation of the integral from x = 0 degrees to x = 60 degree of tan(x) with respect to x is:\n%.5f\nThe exact solution is:\n%.5f\n", integral_approx, integral_exact);
    return 0;
};

// Function to convert degrees to radians
double degreeToRadian(double degree) {
    return (degree * M_PI)/180.0;
};

// Function to calculate the tan(x) values
void calculateTanValues() {
    int i;
    double degree, radian;
    for(i = 0; i < N; i++) {
        degree =  i * 5.0;
        radian = degreeToRadian(degree);
        tanVal[i] = tan(radian);
    }
};

// Function to calculate the area
double calculateArea(int num) {
    double area = tanVal[0] + tanVal[N];
    int i;
    for(i = 1; i < N; i++) {
        area += 2.0 * tanVal[i];
    }
    double width = degreeToRadian((60.0 - 0)/(2.0 * N));
    area = width * area;
    return area;
};

// Function to apply Trapezoidal Rule
double trapezoidalRule() {
    int numPoints = N;
    return calculateArea(numPoints);
};