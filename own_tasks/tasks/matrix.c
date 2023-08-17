// 6 столбец выводит 7
// 3 строка выводит 7 

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int m[9][9];

    for (int i = 0; i < 9; i++)
    {
        for (int k = 0; k < 9; k++)
        {
            if (k == 5 || i == 3)
            {
                m[i][k] = 7;
                printf("%d", m[i][k]);
            }
            else
            {
                m[i][k] = 0;
                printf("%d",m[i][k]);
            }
            
        }
        printf("\n");
    }
    return 0;
}

