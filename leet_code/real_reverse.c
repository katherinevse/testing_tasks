#include <stdio.h>

void reverseArray(int *num, int size){
    int temp = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = size - 1 ; j >= 0; j--)
        {
            temp = num[i]; //1
            num[i]= num[j]; // i = 9
            num[j] = temp;
        }
    }
    
    for (int t = 0; t < size; t++)
    {
        printf("%d",num[t]);
    }
    
}
//
/*
1 = index size
2 = index size -1
3 = index size -2 ( j ) - index
*/
int main(){
    int arr[]={ 1, 5, 6, 7, 8, 9};

    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, size);
}

