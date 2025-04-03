#include <stdio.h>
int main()
// squre matrix of order n
 {
    int n,m;
    printf("Enter the order of the matrix (n): ");
    scanf("%d", &n);
    printf("Enter the order of the matrix (m): ");
    scanf("%d", &m);
    int matrix[n][m];
    printf("Enter the elements of the %d x %d matrix:\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nThe %d x %d matrix is:\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
