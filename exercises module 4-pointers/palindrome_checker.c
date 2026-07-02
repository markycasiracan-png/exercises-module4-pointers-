#include <stdio.h>

int isPalindrome(int *arr, int size) {
    int *left = arr, *right = arr + size - 1;
     int result = 1;
    while (left < right) {
        if (*left != *right) 
        return 0;
        left++;
        right--;
    }
    return 1;
}
int main() {
    int t1[] = {1,2,3,2,1}, 
        t2[] = {5,4,4,5},
        t3[] = {1,2,3,4,5},
        t4[] = {7}, 
        t5[] = {9,9}, 
        t6[] = {3,7},
        t7[] = {1,2,3,4,5,4,3,2,1};

    if (isPalindrome(t1, 5))
        printf("%-20s -> PALINDROME         | Reads same forwards/backwards\n", "{1,2,3,2,1}");
    else
        printf("%-20s -> NOT PALINDROME\n", "{1,2,3,2,1}");

    if (isPalindrome(t2, 4))
        printf("%-20s -> PALINDROME         | Even length palindrome\n", "{5,4,4,5}");
    else
        printf("%-20s -> NOT PALINDROME\n", "{5,4,4,5}");

    if (isPalindrome(t3, 5))
        printf("%-20s -> PALINDROME\n", "{1,2,3,4,5}");
    else
        printf("%-20s -> NOT PALINDROME     | 1 ≠ 5, fails immediately\n", "{1,2,3,4,5}");

    if (isPalindrome(t4, 1))
        printf("%-20s -> PALINDROME         | Single element always palindrome\n", "{7}");
    else
        printf("%-20s -> NOT PALINDROME\n", "{7}");

    if (isPalindrome(t5, 2))
        printf("%-20s -> PALINDROME         | Identical elements\n", "{9,9}");
    else
        printf("%-20s -> NOT PALINDROME\n", "{9,9}");

    if (isPalindrome(t6, 2))
        printf("%-20s -> PALINDROME\n", "{3,7}"); 
    else
        printf("%-20s -> NOT PALINDROME     | 3 ≠ 7\n", "{3,7}");

    if (isPalindrome(t7, 9))
        printf("%-20s -> PALINDROME         | Longer palindrome\n", "{1,2,3,4,5,4,3,2,1}");
    else
        printf("%-20s -> NOT PALINDROME\n", "{1,2,3,4,5,4,3,2,1}");

    return 0;
}
