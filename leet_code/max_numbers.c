#include <stdio.h>

void maxNum(int* numbers, int sizeOf) {
    int state = 0;

    for (int i = 0; i < sizeOf; i++) {
        if (state < numbers[i]) {
            state = numbers[i];
        }
    }
    printf("%d", state);
}

int main() {
    int arr[] = {3, 6, 2, 100, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    maxNum(arr, size);

    return 0;
}