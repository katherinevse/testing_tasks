#include <stdio.h>

void reverseArray(int *num, int size) {
    int temp = 0;
    int i = 0;
    int j = size - 1;
    while (i < j) {
        temp = num[i];    // 1
        num[i] = num[j];  // i = 9
        num[j] = temp;
        i++;
        j--;
    }
}

int main() {
    int arr[] = {1, 5, 6, 7, 8, 9};

    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, size);
    for (int t = 0; t < size; t++) {
        printf("%d", arr[t]);
    }
    return 0;
}
