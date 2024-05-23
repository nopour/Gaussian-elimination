#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>
#define SIZE 10

using namespace std;

int main() {
    float a[SIZE][SIZE], x[SIZE], ratio;
    int i, j, k, n;

    // Input: Number of unknowns
    cout << "Enter the number of unknowns: ";
    cin >> n;

    // Input: Coefficients of Augmented Matrix
    cout << "Enter the coefficients of the Augmented Matrix:" << endl;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n + 1; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    // Applying Gauss Elimination
    for (i = 1; i <= n - 1; i++) {
        if (a[i][i] == 0.0) {
            cout << "Mathematical Error!";
            exit(0);
        }
        for (j = i + 1; j <= n; j++) {
            ratio = a[j][i] / a[i][i];
            for (k = 1; k <= n + 1; k++) {
                a[j][k] = a[j][k] - ratio * a[i][k];
            }
        }
    }

    // Obtaining Solution by Back Substitution Method
    x[n] = a[n][n + 1] / a[n][n];
    for (i = n - 1; i >= 1; i--) {
        x[i] = a[i][n + 1];
        for (j = i + 1; j <= n; j++) {
            x[i] = x[i] - a[i][j] * x[j];
        }
        x[i] = x[i] / a[i][i];
    }

    // Displaying Solution
    cout << endl << "Solution:" << endl;
    for (i = 1; i <= n; i++) {
        cout << "x[" << i << "] = " << x[i] << endl;
    }

    return 0;
}

