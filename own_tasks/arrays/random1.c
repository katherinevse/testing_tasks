/*создадим программу, которая найдет сумму всех элементов в массиве и определит,
является ли эта сумма четной или нечетной.:*/

#include <stdio.h>

int main() {
  int arr[6] = {5, 6, 7, 8, 9, 10};

  int sum = 0;
  for (int i = 0; i < 6; i++) {
    sum += arr[i];
  }
  printf("Сумма элементов массива: %d\n", sum);

  if (sum % 2 == 0) {
    printf("Сумма четная\n");
  } else {
    printf("Сумма нечетная\n");
  }

  return 0;
}
