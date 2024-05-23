# Gaussian-elimination
This C++ code implements the Gaussian elimination method to solve a system of linear equations.

Input:
The user specifies the number of unknowns (variables) in the system of linear equations.
The coefficients of the augmented matrix (including the right-hand side constants) are provided by the user.
Gaussian Elimination:
The program transforms the augmented matrix into an upper triangular form using Gaussian elimination.
It starts by checking if the diagonal element (pivot) is zero. If so, it exits with an error message.
For each row below the current row, it calculates a ratio and subtracts a multiple of the current row from the subsequent rows to make the elements below the pivot zero.
Back Substitution:
After obtaining the upper triangular matrix, the program solves for the unknowns using back substitution.
Starting from the last row, it calculates the value of each unknown by subtracting the known values of the other variables.
Output:
The solution (values of the unknowns) is displayed after performing the calculations.

