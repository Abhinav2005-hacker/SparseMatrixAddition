#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k1 = 1, k2 = 1, count1 = 0, count2 = 0, swap;
    printf("Enter the rows and columns for first matrix:\n");
    scanf("%d", &r1);
    scanf("%d", &c1);
    printf("Enter the rows and columns for second matrix:\n");
    scanf("%d", &r2);
    scanf("%d", &c2);

    if (r1 != r2 || c1 != c2) {
        printf("Matrices cannot be added: Dimensions mismatch\n");
        return 0;
    }

    int a[r1][c1];
    printf("Enter the first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j] != 0) {
                count1++;
            }
        }
    }

    int b[r2][c2];
    printf("Enter the second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
            if (b[i][j] != 0) {
                count2++;
            }
        }
    }

    if (count1 > r1 * c1 / 2 || count2 > r2 * c2 / 2) {
        printf("Number of non-zero elements in one of the matrices is more than half of total elements.\n");
        return 0;
    }

    // Perform addition on sparse matrices
    int sum[r1][c1];
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print the result of addition
    printf("Result of sparse matrix addition:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
