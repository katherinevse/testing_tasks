#include <stdio.h>

// Функция, принимающая указатель на int и увеличивающая значение на 1
void incrementValue(int *ptr) {
    (*ptr)++;  // Увеличиваем значение, на которое указывает указатель
}

int main() {
    int x = 10;
    int b = 30;  // не используется по факту

    printf("Исходное значение x: %d\n", x);

    // Передаем указатель на x в функцию
    incrementValue(&x);

    printf("После вызова функции значение x: %d\n", x);

    return 0;
}
