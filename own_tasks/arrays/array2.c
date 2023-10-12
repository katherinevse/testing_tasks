// начать отсчет массива от цифры 5
#include <stdio.h>

// 1 2 3 4 5 6 7 8

int main() {
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 8};
  int size_after_5;

  int size = sizeof(array) / sizeof(array[0]);
  printf("Size: %d ", size);

  for (int i = 0; i < size; i++) {
    if (array[i] == 5) {
      size_after_5 = size - i;
      printf("Size after 5 : %d ", size_after_5);
    }
    // printf("array: %d ", array[i]);
  }

  return 0;
}