#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of students (rows/columns): ");
    scanf("%d", &n);

    int seating[n][n];
    int i, j, flag = 1; // flag = 1 means assume identity

    printf("Enter the seating chart (0 or 1):\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &seating[i][j]);
        }
    }

    // Check if matrix is identity
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j && seating[i][j] != 1)
                flag = 0; // diagonal should be 1
            else if(i != j && seating[i][j] != 0)
                flag = 0; // other positions should be 0
        }
    }

    if(flag == 1)
        printf("\nAll students are in their correct seats (Identity Matrix).\n");
    else
        printf("\nSome students are not in their correct seats.\n");

    return 0;
}

