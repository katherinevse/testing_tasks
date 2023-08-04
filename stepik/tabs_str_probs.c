#include <stdio.h>


// int argc - кол-во аргументов
//char *argv[] - указатель на каждый аргумент, включая название программы 

int main (const int  argc, const char  *argv[])
{
    int c_prob = 0; int c_tabs = 0; int c_newString = 0;
    int symbol;
    for (symbol = getchar(); symbol != EOF; symbol = getchar())
    {
        if (symbol == ' ')
            c_prob++;
        if (symbol == '\t')
            c_tabs++;
        if (symbol == '\n')
            c_newString++;
    }
    printf ("probs= %d\n,tabs = %d\n, strings = %d\n",c_prob,c_tabs,c_newString);

    return 0;
}