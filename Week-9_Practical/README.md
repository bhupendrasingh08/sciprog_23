**Week 9 Practical**

This is the source code for practical 8 of Scientific Programming. The practical demonstrates how to read data from a file and find magic square. To compile the source code use the following commands:

Q1. **Magic Square**

**To Compile**
	 
    gcc magic_square_stub.c -o magic_square_stub -lm -Wall

**To print**

    ./magic_square_stub

**-lm** is to map math library to the gcc and **-Wall** is to show all the warnings

The output is:

Enter file name: magic_square.txt
No. lines, 3
2	7	6	
9	5	1	
4	3	8	
M=15
i=0, rowSum=15, colSum=15
i=1, rowSum=15, colSum=15
i=2, rowSum=15, colSum=15
Main diagonal sum=15, Secondary diagonal sum=15
The square is magic
 
Enter file name: not_magic_square.txt
No. lines, 3
1	2	3	
4	5	6	
7	8	9	
M=15
i=0, rowSum=6, colSum=6
Not a magic square
The square is not magic
