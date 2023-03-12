#include <stdio.h>
int main() {
    int row, columns, a[100][100], b[100][100], addition[100][100], i, j;
    printf("please enter the number of rows for matrix: ");
    scanf("%d", &row);
    printf("please enter the number of columns for matrix: : ");
    scanf("%d", &columns);

    printf("\nplease enter elements of first matrix:\n");
    for (i = 0; i < row; ++i)
        for (j = 0; j < columns; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < row; ++i)
        for (j = 0; j < columns; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    for (i = 0; i < row; ++i)
        for (j = 0; j < columns; ++j) {
            addition[i][j] = a[i][j] - b[i][j];
        }
    printf("\naddition of two matrices: \n");
    for (i = 0; i < row; ++i)
        for (j = 0; j < columns; ++j) {
            printf("%d   ", addition[i][j]);
            if (j == columns - 1) {
                printf("\n\n");
            }
        }

    return 0;
}
