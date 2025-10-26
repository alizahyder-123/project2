#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int image[rows][cols][3]; // 3D array for RGB
    int i, j, k;
    long sum = 0;
    int totalValues = rows * cols * 3;

    printf("Enter RGB values for each pixel (0-255):\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Pixel[%d][%d] (R G B): ", i, j);
            for(k = 0; k < 3; k++) {
                scanf("%d", &image[i][j][k]);
                sum += image[i][j][k];
            }
        }
    }

    double averageIntensity = (double)sum / totalValues;
    printf("\nAverage color intensity of image = %.2f\n", averageIntensity);

    return 0;
}

