//
//  main.cpp
//  synergy-demo-cpp
//
//  Created by Данил Фурман on 30.10.2022.
//
#include <stdio.h>

// Task 2
void compareNumbers () {
    int first, second;
    
    // Onboarding
    printf("\nПрограмма сравнивает два числа. Вам будет предложено ввести два числа, после чего программа сравнит эти числа и выведет результат сравнения чисел на экран\n");
    
    // Input
    printf("\nПожалуйста, введите первое число: ");
    scanf("%i", &first);
    printf("\nПожалуйста, введите второе число: ");
    scanf("%i", &second);
    
    // Compare
    if (first > second) {
        printf("\nПервое число %i больше, чем второе число %i\n", first, second);
    } else if (first < second) {
        printf("\nПервое число %i меньше, чем второе число %i\n", first, second);
    } else {
        printf("\nПервое число %i и второе число %i равны\n", first, second);
    }
}

// Task 1
void printHello () {
    printf("Hello, World!\n");
}

// Init all
int main () {
    int programChoice;

    printf("\nВведите число для выбора запуска программы из домашних заданий: ");
    scanf("%i", &programChoice);

    if (programChoice == 1) {
        printHello();
    }

    if (programChoice == 2) {
        compareNumbers();
    }

    printf("\nКонец программы\n");
    return 0;
}

