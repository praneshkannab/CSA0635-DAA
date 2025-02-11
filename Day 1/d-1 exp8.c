#include <stdio.h>

// Function to perform Bubble Sort
void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Driver function
int main() {
    int nums[] = {5, 3, 8, 1, 2};
    int size = sizeof(nums) / sizeof(nums[0]);

    bubble_sort(nums, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    return 0;
}
