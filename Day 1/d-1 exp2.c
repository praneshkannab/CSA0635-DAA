#include <stdio.h>

// Function to count matching indices
void count_matching_indices(int nums1[], int size1, int nums2[], int size2, int result[]) {
    int answer1 = 0, answer2 = 0;
    
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (nums1[i] == nums2[j]) {
                answer1++;
                break;
            }
        }
    }
    
    for (int i = 0; i < size2; i++) {
        for (int j = 0; j < size1; j++) {
            if (nums2[i] == nums1[j]) {
                answer2++;
                break;
            }
        }
    }
    
    result[0] = answer1;
    result[1] = answer2;
}

// Driver function
int main() {
    int nums1[] = {4, 3, 2, 3, 1};
    int nums2[] = {2, 2, 5, 2, 3, 6};
    int result[2];

    count_matching_indices(nums1, 5, nums2, 6, result);
    printf("Output: [%d, %d]\n", result[0], result[1]);

    return 0;
}
