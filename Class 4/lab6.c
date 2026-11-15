#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
    if (low > high) {
        return -1; // Base case: target not found
    }

    int mid = (low + high) / 2;

    if (arr[mid] == target) {
        return mid; // Base case: target found at index mid
    } else if (target < arr[mid]) {
        return binarySearch(arr, low, mid - 1, target); // Search left half
    } else {
        return binarySearch(arr, mid + 1, high, target); // Search right half
    }
}

int main() {
    int n, arr[100], target;
    scanf("%d", &n);

    // Input must be sorted in ascending order
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);

    int index = binarySearch(arr, 0, n - 1, target);
    if (index != -1) {
        printf("Target found at index %d\n", index);
    } else {
        printf("Target not found\n");
    }

    return 0;
}
