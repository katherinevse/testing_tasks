/*Обратный порядок:
Реализуй программу, которая меняет порядок элементов массива на обратный.*/

#include <stdio.h>

int main() {
  int array[] = {4, 5, 7, 8, 80, 43};
  int size = sizeof(array) / sizeof(array[0]);
  printf("Size: %d\n", size);

  for (int i = size - 1; i > 0; i--) {
    printf("%d\n", array[i]);
  }

  return 0;
}