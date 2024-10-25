#include <stdio.h>

// Declaration of the assembly function
extern void matmul_asm(int* A, int* B, int* C, int N);

int main() {
    int N = 2;  // 2x2 matrices
    int A[2][2] = { {1, 2}, {3, 4} };
    int B[2][2] = { {5, 6}, {7, 8} };
    int C[2][2];  // Resultant matrix

    // Call matrix multiplication using assembly
    matmul_asm(&A[0][0], &B[0][0], &C[0][0], N);

    // Print the result
    printf("Matrix C (Result):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
