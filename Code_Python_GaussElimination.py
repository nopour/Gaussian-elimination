def gaussian_elimination(a):
    n = len(a)
    
    # Applying Gaussian elimination
    for i in range(n):
        if a[i][i] == 0.0:
            print("Mathematical Error!")
            return None
        for j in range(i + 1, n):
            ratio = a[j][i] / a[i][i]
            for k in range(n + 1):
                a[j][k] -= ratio * a[i][k]

    # Obtaining solution by back substitution method
    x = [0] * n
    for i in range(n - 1, -1, -1):
        x[i] = a[i][n]
        for j in range(i + 1, n):
            x[i] -= a[i][j] * x[j]
        x[i] /= a[i][i]

    return x

# Example input matrix
augmented_matrix = [
    [1, 1, 1, 9],
    [2, -3, 4, 13],
    [3, 4, 5, 40]
]

solution = gaussian_elimination(augmented_matrix)

if solution:
    print("Solution:")
    for i, val in enumerate(solution, start=1):
        print(f"x[{i}] = {val:.3f}")
