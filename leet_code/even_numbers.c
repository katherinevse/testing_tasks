/*
Ввод: числа = [0,1,0,3,12]
Вывод: [1,3,12,0,0]
*/

#include <stdio.h>

void evenNum(int nums[], int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 0) {
            printf("%d", nums[i]);
        }
    }
}

int main() {
    int arr[] = {1, 2, 4, 5, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    evenNum(arr, size);

    return 0;
}