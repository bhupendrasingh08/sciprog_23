This is the source code used for practical 6 of Scientific Programming. This practical outlines the methodology of multiplying two matrices in C.

It further shows different methods by which the source code can be compiled.You can compile the code by having matmul.c return C to main.c by entering the "Step-6" directory and using:

gcc -c main.c

gcc -c Matmul.c

gcc -o Matmul main.o Matmul.o

You could also compile the code using:

In the home directory (Week-6_Practical) you can also simply do the usual:
To Compile

gcc MatrixMultiplication.c -o MatrixMultiplication -lm -Wall

To print

./MatrixMultiplication

Or you could go into the Step-6 directory and then the Ccodes directory and use the make file by typing:

make

Each of these will carry out the same matrix multiplication using differing commands.
