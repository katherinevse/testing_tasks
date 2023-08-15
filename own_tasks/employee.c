/*
Задача: Учет сотрудников и анализ стажа работы
Требуется разработать программу на языке Си для учета данных о сотрудниках компании и анализа их стажа работы.
Каждый сотрудник описывается следующими данными:

Фамилия
Имя
Отчество
Должность
Пол
Год приема на работу


Необходимо выполнить следующие шаги:

Создать структуру Employee, включающую все указанные данные.
Реализовать функцию calculateAverageExperience, которая принимает массив структур Employee и их количество в качестве аргументов,
и возвращает средний стаж работы всех сотрудников в годах.
Реализовать функцию printExperiencedEmployees, которая принимает массив структур Employee, 
их количество и средний стаж работы, и выводит на экран информацию о сотрудниках, стаж которых выше среднего.

Программа должна запрашивать у пользователя данные о сотрудниках и выводить результат анализа на экран.

*/ 

#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

struct Employee {
    char name[50];
    char surname[50];
    char position[50];
    char gender;
    int yearsOfService;
};

float calculateAverageExperience(struct Employee employees[], int numEmployees) {
    int totalExperience = 0;
    for (int i = 0; i < numEmployees; i++) {
        totalExperience += employees[i].yearsOfService;
    }
    return (float)totalExperience / numEmployees;
}

void printExperiencedEmployees(struct Employee employees[], int numEmployees, float averageExperience) {
    printf("Experienced employees:\n");
    for (int i = 0; i < numEmployees; i++) {
        if (employees[i].yearsOfService > averageExperience) {
            printf("Name: %s %s\n", employees[i].name, employees[i].surname);
            printf("Position: %s\n", employees[i].position);
            printf("Years of Service: %d\n", employees[i].yearsOfService);
            printf("---------------------------\n");
        }
    }
}

int main(void) {
    struct Employee employees[MAX_EMPLOYEES];
    int numEmployees;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    for (int i = 0; i < numEmployees; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Surname: ");
        scanf("%s", employees[i].surname);
        printf("Position: ");
        scanf("%s", employees[i].position);
        printf("Gender (M/F): ");
        scanf(" %c", &employees[i].gender); // Notice the space before %c to consume newline
        printf("Years of Service: ");
        scanf("%d", &employees[i].yearsOfService);
    }

    float averageExperience = calculateAverageExperience(employees, numEmployees);
    printf("Average experience: %.2f years\n", averageExperience);

    printExperiencedEmployees(employees, numEmployees, averageExperience);

    return 0;
}
