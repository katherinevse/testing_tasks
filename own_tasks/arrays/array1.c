/*Дан массив целых чисел. Все элементы, оканчивающиеся цифрой 4, уменьшить вдвое
 */
#include <stdio.h>

int cool_array(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    if (arr[i] % 10 == 4) {
      arr[i] /= 2;
    }
  }
  return 0;
}

int main() {
  int arr[] = {44, 44, 55};
  int size = sizeof(arr) /
             sizeof(arr[0]); // 24 байта(если 6 элементов 4*6) /4 байта = 6;

  cool_array(arr, size);
  printf("Modif array: ");

  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}