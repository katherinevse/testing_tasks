/*
username:~/workspace/pset1 $ ./mario
size : 5
#####
#####
#####
#####
#####
*/


#include <stdio.h>

int main(void)
{
    int n;
    do 
    {
        printf("Size: ");
        scanf("%d", &n);
    }
    while (n < 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
