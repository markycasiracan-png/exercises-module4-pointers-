#include <stdio.h>

int isArrayPalindrome(int *arr, int size) {
    if (size <= 1) return 1;

    int *ptr_start = arr;
    int *ptr_end = arr + size - 1;

    while (ptr_start < ptr_end) {
        if (*ptr_start != *ptr_end) {
            return 0;
        }
        ptr_start++;
        ptr_end--;
    }

    return 1;
}
void testArray(int *arr, int size, int testNum) {
    printf("Array %d: ", testNum);
    if (isArrayPalindrome(arr, size)) {
        printf("Is a palindrome\n");
    } else {
        printf("Is NOT a palindrome\n");
    }
}
int main() {
    int a1[] = {1, 2, 3, 2, 1};
    int a2[] = {5, 4, 4, 5};
    int a3[] = {1, 2, 3, 4, 5};
    int a4[] = {7};
    int a5[] = {9, 9};
    int a6[] = {3, 7};
    int a7[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};

    testArray(a1, sizeof(a1) / sizeof(a1[0]), 1);
    testArray(a2, sizeof(a2) / sizeof(a2[0]), 2);
    testArray(a3, sizeof(a3) / sizeof(a3[0]), 3);
    testArray(a4, sizeof(a4) / sizeof(a4[0]), 4);
    testArray(a5, sizeof(a5) / sizeof(a5[0]), 5);
    testArray(a6, sizeof(a6) / sizeof(a6[0]), 6);
    testArray(a7, sizeof(a7) / sizeof(a7[0]), 7);

    return 0;
}