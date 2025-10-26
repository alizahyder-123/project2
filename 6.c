#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    int i, j , s ;

    for ( i = 1; i <= rows; i++) {
        // Print spaces for symmetry
        for ( s = i; s < rows; s++) {
            printf(" ");
        }

        // Print letters from A up to ith letter
        for (j = 0; j < i; j++) {
            printf("%c ", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}

