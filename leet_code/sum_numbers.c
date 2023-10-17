#include <stdio.h>

void sumNum(int *numbers, int sizeOf) {
    int sum = 0;

    for (int i = 0; i < sizeOf; i++) {
        sum += numbers[i];
    }
    printf("%d", sum);
}

int main() {
    int array[] = {3, 3, 3};
    int size = sizeof(array) / sizeof(array[0]);

    sumNum(array, size);

    return 0;
}