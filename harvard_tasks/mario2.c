/*
username:~/workspace/pset1 $ ./mario
height: 8
##       
###      
####     
#####    
######   
#######  
######## 
#########

*/

#include <stdio.h>

void drawPyramid(int height) {
    // Цикл для каждого уровня пирамиды
    for (int i = 1; i <= height; i++) 
    {
         // Отображаем знаки '#', соответствующие номеру текущего уровня
        for (int k = 0; k <= i; k++) {
            // k = 0
            // i = 1
            // k = 1
            // i = 1
            printf("#"); // Вывод знака '#'
        }

        // // Отображаем пробелы перед знаками '#' для смещения пирамиды вправо
        // for (int j = 0; j < height - i; j++) 
        // {
        //     printf(" "); // Вывод пробела
        // }

       
        // Переход на новую строку для следующего уровня пирамиды
        printf("\n");
    }
}



int main() 
{
    int height = 8;
    drawPyramid(height);

    return 0;
}





