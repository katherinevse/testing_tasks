#include <stdio.h>

// Функция для нахождения суммы элементов массива
int findSum(int *arr, int size) {
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Передаем массив и его размер в функцию
    int result = findSum(numbers, size);

    printf("Сумма элементов массива: %d\n", result);

    return 0;
}

// arr на что указывает?
//  что принимает?