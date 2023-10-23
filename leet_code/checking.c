#include <stdio.h>

void printCharacters(char *str) {
        printf("%c", *str);
    
}

int main() {
    char myString[] = "Hello";
    printCharacters(myString);

    return 0;
}
