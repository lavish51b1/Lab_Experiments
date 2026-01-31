#include <stdio.h>

int main() {
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int mat[r][c];

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    // Row sum
    for(i = 0; i < r; i++) {
        int sum = 0;
        for(j = 0; j < c; j++)
            sum += mat[i][j];
        printf("Sum of row %d = %d\n", i+1, sum);
    }

    // Column sum
    for(j = 0; j < c; j++) {
        int sum = 0;
        for(i = 0; i < r; i++)
            sum += mat[i][j];
        printf("Sum of column %d = %d\n", j+1, sum);
    }

    return 0;
}

