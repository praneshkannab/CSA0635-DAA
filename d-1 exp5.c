#include <stdio.h>

// Function to find the maximum element
int find_max(int nums[], int size) {
    int max = nums[0];
    for (int i = 1; i < size; i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
    }
    return max;
}

// Driver function
int main() {
    int nums[] = {1, 2, 3, 4, 5};
    printf("Output: %d\n", find_max(nums, 5));
    return 0;
}
