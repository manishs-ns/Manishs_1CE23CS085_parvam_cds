#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols], transposed[cols][rows];
    printf("Enter elements of the matrix:\n");
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
    printf("\nTransposed Matrix:\n");
    for(int i=0;i<cols;i++) {
        for(int j=0;j<rows;j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}
