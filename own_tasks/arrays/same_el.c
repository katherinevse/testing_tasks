/*Уникальные элементы:
Напиши программу, которая определяет, есть ли повторяющиеся элементы в массиве,
и если есть, выводит их */

#include <stdio.h>

int main() {

  int array[] = {5, 6, 6, 7, 8, 9, 5, 9};
  int size = sizeof(array) / sizeof(array[0]);

  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (array[i] == array[j]) {
        printf("%d", array[i]);
      }
    }
  }

  return 0;
}