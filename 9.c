#include <stdio.h>

int main() {
    int cities, days;
    float temp[10][10][3];  // [city][day][time of day]
    float maxTemp[10];
    char *times[3] = {"Morning", "Afternoon", "Night"};

    printf("Enter number of cities: ");
    scanf("%d", &cities);
    printf("Enter number of days: ");
    scanf("%d", &days);

    // Input temperature data
    int c,d,t;
    for ( c = 0; c < cities; c++) {
        printf("\n--- City %d ---\n", c + 1);
        for ( d = 0; d < days; d++) {
            printf("Day %d:\n", d + 1);
            for ( t = 0; t < 3; t++) {
                printf("  Enter temperature in %s: ", times[t]);
                scanf("%f", &temp[c][d][t]);
            }
        }
    }

    // Find maximum temperature for each city
    for ( c = 0; c < cities; c++) {
        maxTemp[c] = temp[c][0][0];
        for ( d = 0; d < days; d++) {
            for (t = 0; t < 3; t++) {
                if (temp[c][d][t] > maxTemp[c]) {
                    maxTemp[c] = temp[c][d][t];
                }
            }
        }
    }

    // Display results
    printf("\n=== Highest Temperatures ===\n");
    for ( c = 0; c < cities; c++) {
        printf("City %d: %.2f°C\n", c + 1, maxTemp[c]);
    }

    return 0;
}

