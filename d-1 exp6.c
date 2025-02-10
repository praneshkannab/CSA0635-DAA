#include <stdio.h>

// Function to sort the array using Quick Sort
void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high], i = low - 1;
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        int pi = i + 1;
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

// Driver function
int main() {
    int nums[] = {3, 3, 3, 3, 3};
    int size = sizeof(nums) / sizeof(nums[0]);

    quick_sort(nums, 0, size - 1);
    printf("Max Element: %d\n", nums[size - 1]);

    return 0;
}
