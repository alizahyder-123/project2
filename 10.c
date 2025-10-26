#include <stdio.h>

int main() {
    int wards, patients, vitals;
    float data[5][5][5];  // [ward][patient][vital]

    printf("Enter number of wards: ");
    scanf("%d", &wards);
    printf("Enter number of patients per ward: ");
    scanf("%d", &patients);
    printf("Enter number of vital signs recorded: ");
    scanf("%d", &vitals);

    // Input data
    int w,p,v;
    for ( w = 0; w < wards; w++) {
        printf("\n--- Enter data for Ward %d ---\n", w + 1);
        for ( p = 0; p < patients; p++) {
            printf("Patient %d:\n", p + 1);
            for ( v = 0; v < vitals; v++) {
                printf("  Vital %d reading: ", v + 1);
                scanf("%f", &data[w][p][v]);
            }
        }
    }

    // Processing: For each ward
    for ( w = 0; w < wards; w++) {
        printf("\n=== Ward %d ===\n", w + 1);

        // Sum of each row (patient)
        printf("\n-- Total Vital Sum for Each Patient (Row Sum) --\n");
        for ( p = 0; p < patients; p++) {
            float rowSum = 0;
            for ( v = 0; v < vitals; v++) {
                rowSum += data[w][p][v];
            }
            printf("Patient %d total = %.2f\n", p + 1, rowSum);
        }

        // Sum of each column (vital)
        printf("\n-- Total Reading for Each Vital Sign (Column Sum) --\n");
        for ( v = 0; v < vitals; v++) {
            float colSum = 0;
            for ( p = 0; p < patients; p++) {
                colSum += data[w][p][v];
            }
            printf("Vital %d total = %.2f\n", v + 1, colSum);
        }
    }

    return 0;
}

