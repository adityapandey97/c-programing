#include <stdio.h>

#define MAX 10

void multiplyMatrices(int firstMatrix[MAX][MAX], int secondMatrix[MAX][MAX], int resultMatrix[MAX][MAX], int rowFirst, int columnFirst, int columnSecond) {
    int i, j, k;

    // Initialize the result matrix with 0
    for (i = 0; i < rowFirst; ++i) {
        for (j = 0; j < columnSecond; ++j) {
            resultMatrix[i][j] = 0;
        }
    }

    // Multiply matrices
    for (i = 0; i < rowFirst; ++i) {
        for (j = 0; j < columnSecond; ++j) {
            for (k = 0; k < columnFirst; ++k) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

int main() {
    int firstMatrix[MAX][MAX], secondMatrix[MAX][MAX], resultMatrix[MAX][MAX];
    int rowFirst, columnFirst, rowSecond, columnSecond;
    int i, j;

    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &rowFirst, &columnFirst);

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &rowSecond, &columnSecond);

    // Check if matrix multiplication is possible
    if (columnFirst != rowSecond) {
        printf("Matrix multiplication is not possible.\n");
        return -1;
    }

    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < rowFirst; ++i) {
        for (j = 0; j < columnFirst; ++j) {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < rowSecond; ++i) {
        for (j = 0; j < columnSecond; ++j) {
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    // Call the function to multiply matrices
    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix, rowFirst, columnFirst, columnSecond);

    // Output the result matrix
    printf("Resultant Matrix:\n");
    for (i = 0; i < rowFirst; ++i) {
        for (j = 0; j < columnSecond; ++j) {
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
