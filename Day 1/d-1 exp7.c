#include <stdio.h>

// Function to find unique elements
void find_unique(int nums[], int size) {
    int seen[1000001] = {0}; // Hashing approach
    for (int i = 0; i < size; i++) {
        if (!seen[nums[i]]) {
            printf("%d ", nums[i]);
            seen[nums[i]] = 1;
        }
    }
    printf("\n");
}

// Driver function
int main() {
    int nums[] = {3, 7, 3, 5, 2, 5, 9, 2};
    find_unique(nums, 8);
    return 0;
}
