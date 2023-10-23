#include <stdio.h>

void printCharacters(char str[]) {
    printf("%c", str[0]);
    
}

int main() {
    char myString[] = "Hello";
    printCharacters(myString);

    return 0;
}

// вот это равно этому


void printCharacters(char *str) {
    printf("%c", *str);
    
}

int main() {
    char myString[] = "Hello";
    printCharacters(myString);

    return 0;
}