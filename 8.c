#include <stdio.h>

int main() {
    int floors, rooms, beds;
    printf("Enter number of floors: ");
    scanf("%d", &floors);
    printf("Enter number of rooms per floor: ");
    scanf("%d", &rooms);
    printf("Enter number of beds per room: ");
    scanf("%d", &beds);

    int building[floors][rooms][beds];
    int i, j, k, emptyCount = 0;

    printf("\nEnter 0 (empty) or 1 (occupied) for each bed:\n");

    for (i = 0; i < floors; i++) {
        for (j = 0; j < rooms; j++) {
            for (k = 0; k < beds; k++) {
                printf("Floor %d, Room %d, Bed %d: ", i + 1, j + 1, k + 1);
                scanf("%d", &building[i][j][k]);
                if (building[i][j][k] == 0)
                    emptyCount++;
            }
        }
    }

    printf("\nTotal empty beds in the building = %d\n", emptyCount);

    return 0;
}

