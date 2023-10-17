#include <stdio.h>
void printArray(int *numbers, int sizing);

void reverseArray(int *num, int size) { printArray(num, size); }

void printArray(int *numbers, int sizing) {
    for (int i = sizing; i >= 0; i--) {
        printf("%d\n", numbers[i]);
    }
}

int main() {
    int arr[] = {3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, size);

    return 0;
}