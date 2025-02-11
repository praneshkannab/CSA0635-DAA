#include <stdio.h>

// Function to count valid pairs
int count_pairs(int nums[], int size, int k) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] == nums[j] && (i * j) % k == 0) {
                count++;
            }
        }
    }
    return count;
}

// Driver function
int main() {
    int nums[] = {3, 1, 2, 2, 2, 1, 3};
    int k = 2;
    printf("Output: %d\n", count_pairs(nums, 7, k));
    return 0;
}
