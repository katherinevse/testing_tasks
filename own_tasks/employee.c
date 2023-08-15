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

float calculateAverageExperience(struct Employee employers[], int numEmployers)
{
    int totalExperience = 0;
    for (int i = 0; i < numEmployers; i++)
    {
        totalExperience += employers[i].yearsOfService;
    }
    return (float) totalExperience / numEmployers;
    
};

// печатать только тех, у кого больше опыта, чем average;
void printExperiencedEmployees(struct Employee employers[],int numEmpoyers, float totalExperience)
{
    for (int i = 0; i < numEmpoyers; i++)
    {
        if (employers[i].yearsOfService > averageExperience)
        {
            
        }
        
    }
    
    
}











int main (void)
{
    struct Employee employers[MAX_EMPLOYEES];
    int numEmployers = 2; 
    


    float averageExperience = calculateAverageExperience(employers, numEmployers);
}

