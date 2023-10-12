// Нахождение максимального элемента:
// Напиши программу, которая находит максимальный элемент в массиве целых чисел.

#include <stdio.h>

int main() {
    int arr[] = {
        -5, 4, 55, 6, 8, 33, 65, 99, 102, 9, 45,
    };
    int size = sizeof(arr) / sizeof(arr[0]);
    int max_value = arr[0];

    for (int i = 0; i < size; i++) {
        if (max_value < arr[i]) {
            max_value = arr[i];
        }
    }
    printf("max %d ", max_value);
    return 0;
}
