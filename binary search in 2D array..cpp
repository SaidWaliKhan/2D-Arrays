#include <stdio.h>

#define ROWS 3
#define COLS 3

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1; // Element not found
}

int search2D(int matrix[ROWS][COLS], int target) {
    int totalElements = ROWS * COLS;
    int low = 0;
    int high = totalElements - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int row = mid / COLS;
        int col = mid % COLS;

        if (matrix[row][col] == target) {
            return mid;
        } else if (matrix[row][col] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1; // Element not found
}

int main() {
    int matrix[ROWS][COLS] = {
        {2, 4, 6},
        {8, 10, 12},
        {14, 16, 18}
    };
    int target;

    printf("Enter a number to search in the 2D array: ");
    scanf("%d", &target);

    int index = search2D(matrix, target);

    if (index != -1) {
        int row = index / COLS;
        int col = index % COLS;
        printf("Number %d found at row %d and column %d.\n", target, row, col);
    } else {
        printf("Number %d not found in the 2D array.\n", target);
    }

    return 0;
}
