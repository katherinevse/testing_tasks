/*
Создать структуру:
Запись «Автомобиль»:
Марка автомобиля
Производитель
Тип
Год выпуска
Дата регистрации

Вывести сведения о машинах марки “Toyota” и
зарегистрированных до 2007-го года.*/

#include <stdio.h>
#include <string.h>

struct Car {
    char brand[50];
    char manufacturer[50];
    char type[50];
    int year;
    char registrationDate[11];
};

void populateCarArray(struct Car carArray[], int numCars) {
    for (int i = 0; i < numCars; i++) {
        printf("Введите информацию о машине %d:\n", i + 1);
        printf("Марка: ");
        scanf("%s", carArray[i].brand);

        printf("Производитель: ");
        scanf("%s", carArray[i].manufacturer);

        printf("Тип: ");
        scanf("%s", carArray[i].type);

        printf("Год выпуска: ");
        scanf("%d", &carArray[i].year);

        printf("Дата регистрации (гггг-мм-дд): ");
        scanf("%s", carArray[i].registrationDate);
    }
}

void printToyotaBefore2007(struct Car carArray[], int numCars) {
    printf("Машины марки Toyota, зарегистрированные до 2007 года:\n");
    for (int i = 0; i < numCars; i++) {
        if (strcasecmp(carArray[i].brand, "Toyota") == 0 && carArray[i].year < 2007) {
            printf("Марка: %s\n", carArray[i].brand);
            printf("Производитель: %s\n", carArray[i].manufacturer);
            printf("Тип: %s\n", carArray[i].type);
            printf("Год выпуска: %d\n", carArray[i].year);
            printf("Дата регистрации: %s\n", carArray[i].registrationDate);
        }
        else
        {
            printf("Ошибка");
        }
        
    }
}

int main() {
    const int numCars = 2;
    struct Car carArray[numCars];

    populateCarArray(carArray, numCars);
    printToyotaBefore2007(carArray, numCars);

    return 0;
}
