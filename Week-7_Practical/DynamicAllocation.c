#include <stdio.h>
#include <stdlib.h>

// Function to create a pointer and allocate memory
int *allocatearray(int n) {
    int *p;
    // p is an integer pointer. The int * before malloc is best practice
    // as it tells us what should be returned before malloc. So we are taking
    // n times the sizeof(int) which is 4 bytes of memory.
    p = (int *) malloc(n*sizeof(int));
    
    return p;
}

// Now, take a pointer to an array of integers and fill every cell with one.
void fillwithones(int *array, int n) {
    int i;
    // Now loop through array making each cell a 1.
    for(i = 0; i < n; i++){
        array[i] = 1;
    }
}


// Function to print the array
void printarray(int *array, int n) {
    int i;
    for(i = 0; i < n; i++){
        printf("a[%d]: %d\n", i, array[i]);
    }
}

// Function to deallocate memory
void freearray(int *array) {
    free(array);
}

int main(int argc, char **argv) {
    int n, *a;
    
    printf("Size of the array:\n");
    
    scanf("%d", &n);
    
    a = allocatearray(n);
    fillwithones(a, n);
    printarray(a, n);
    freearray(a);
    
    // Just to ensure a doesn't point anywhere we set a = NULL;
    a = NULL;
    return 0;

}
