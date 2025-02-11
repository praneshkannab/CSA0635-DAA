#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int is_palindrome(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

// Function to find the first palindromic string
char* first_palindromic_string(char* words[], int size) {
    for (int i = 0; i < size; i++) {
        if (is_palindrome(words[i])) {
            return words[i];
        }
    }
    return "";
}

// Driver function
int main() {
    char *words[] = {"abc", "car", "ada", "racecar", "cool"};
    int size = sizeof(words) / sizeof(words[0]);
    
    char* result = first_palindromic_string(words, size);
    if (strlen(result) > 0)
        printf("First Palindromic String: %s\n", result);
    else
        printf("No Palindromic String found\n");
    
    return 0;
}
