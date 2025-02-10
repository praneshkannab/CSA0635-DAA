#include <stdio.h>
#include <stdlib.h>

// Function to compute the sum of squares of distinct counts of all subarrays
int sum_of_squares(int nums[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        int distinct_count = 0;
        int seen[101] = {0};  // Assuming numbers are within 0-100
        for (int j = i; j < size; j++) {
            if (!seen[nums[j]]) {
                distinct_count++;
                seen[nums[j]] = 1;
            }
            sum += distinct_count * distinct_count;
        }
    }
    return sum;
}

// Driver function
int main() {
    int nums[] = {1, 2, 1};
    int size = sizeof(nums) / sizeof(nums[0]);

    printf("Output: %d\n", sum_of_squares(nums, size));

    return 0;
}
