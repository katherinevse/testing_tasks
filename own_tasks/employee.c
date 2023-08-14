/*

Конечно, вот ваша задача для создания структуры на языке Си:
Задача: Учет сотрудников и анализ стажа работы
Требуется разработать программу на языке Си для учета данных о сотрудниках компании и анализа их стажа работы.
Каждый сотрудник описывается следующими данными:

Фамилия
Имя
Отчество
Должность
Пол
Дата приема на работу (в формате ДД.ММ.ГГГГ)
Необходимо выполнить следующие шаги:

Создать структуру Employee, включающую все указанные данные.
Реализовать функцию calculateAverageExperience, которая принимает массив структур Employee и их количество в качестве аргументов,
и возвращает средний стаж работы всех сотрудников в годах.
Реализовать функцию printExperiencedEmployees, которая принимает массив структур Employee, 
их количество и средний стаж работы, и выводит на экран информацию о сотрудниках, стаж которых выше среднего.

Программа должна запрашивать у пользователя данные о сотрудниках (не более 100) и выводить результат анализа на экран.

*/ 

#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

struct Employee {
    char lastName[50];
    char firstName[50];
    char middleName[50];
    char position[50];
    char gender;
    int yearsOfService;
    
};
