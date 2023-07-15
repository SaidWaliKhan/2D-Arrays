#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int matrix[ROWS][COLS] = {
        {2, 4, 6},
        {8, 10, 12},
        {14, 16, 18}
    };
    int target;

    printf("Enter a number to search in the 2D array: ");
    scanf("%d", &target);

    int low = 0;
    int high = COLS - 1;

    while (low < ROWS && high >= 0) {
        if (matrix[low][high] == target) {
            printf("Number %d found at row %d and column %d.\n", target, low, high);
            return 0;
        } else if (matrix[low][high] < target) {
            low++;
        } else {
            high--;
        }
    }

    printf("Number %d not found in the 2D array.\n", target);
    return 0;
}
