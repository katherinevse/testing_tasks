#include <stdio.h>

void reverseArray(int *num, int size){
    int temp = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = size; i < 0; i++)
        {
            temp = num[i]; //1
            num[j]= num[i]; // i = 9
            temp = num[j];
        }
    }
    printf("%d", num);
    
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

