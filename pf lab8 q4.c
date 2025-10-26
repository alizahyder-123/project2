#include<stdio.h>
int main(){

int rows, cols;
int matrix [6][6];
int i, j, countZero = 0 ;

printf("Enter the number of rows\n:");
scanf("%d",&rows);
printf("Enter the number of cols\n:");
scanf("%d",&cols);

printf("Enter the elements of matrix\n:");
  for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
     for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(matrix[i][j] == 0)
                countZero++;
        }
    }
    int totalElements = rows*cols;
     printf("\nTotal number of elements: %d", totalElements);
    printf("\nNumber of zero elements: %d", countZero);

    if(countZero > totalElements / 2)
        printf("\n\nThe matrix is a Sparse Matrix.\n");
    else
        printf("\n\nThe matrix is NOT a Sparse Matrix.\n");

    return 0;
}
