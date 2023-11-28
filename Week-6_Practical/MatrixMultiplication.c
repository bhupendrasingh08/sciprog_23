#include<stdio.h>

int main(int argc, char **argv) {
    int n = 5, p = 3, q = 4; // Define how big the matrices that will be multiplied will be.
    double A[n][p], B[p][q], C[n][q]; // signify the size of each of the matrices which will be used
    int i, j, k; // These will be used to loop through the rows and columns 
    
    // Initializing Matrix A which will be composed of the sum of the the row and column indexes.
    for(i = 0; i < n; i++){
        for(j = 0; j < p; j++){
            A[i][j] = i + j;
        }
    }
    
    // Initializing Matrix B which will be composed of the difference of the the row and column indexes.
    for(i = 0; i < p; i++){
        for(j = 0; j < q; j++){
            B[i][j] = i - j;
        }
    }
    
    // Initialize C by setting all of the inputs to 0.
    for(i = 0; i < n; i++){
        for(j = 0; j < q; j++){
            C[i][j] = 0;
        }
    }
    
    // Here the multiplication is performed. It is quite simple, just
    // create a nested loop with i, j and k which will multiply along
    // the rows of A with columns of B and add those to the inputs of C
    // which are 0s. This will form the multiplied matrix C.
    for(i = 0; i < n; i++){
        for(j = 0; j < q; j++){
            for(k = 0; k < p; k++){
                C[i][j] = C[i][j] + A[i][k]*B[k][j];
            }
        }
    }
    
    // Finally, the matrices will be printed by using another nested
    // loop which will iteratively go through each element of the matrix
    // and print them. This is done for all three matrices, the only
    // change being the size of the matrix.
    printf("\nThis is the matrix A:\n");
    
    for(i = 0; i < n; i++){
        for(j = 0; j < p; j++){
            printf("%3.0f ", A[i][j]);
        }
        printf("\n");
    }
    
    printf("\nThis is the matrix B:\n");
    
    for(i = 0; i < p; i++){
        for(j = 0; j < q; j++){
            printf("%3.0f ", B[i][j]);
        }
        printf("\n");
    }
    
    printf("\nThis is the matrix C:\n");
    
    for(i = 0; i < n; i++){
        for(j = 0; j < q; j++){
            printf("%3.0f ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}