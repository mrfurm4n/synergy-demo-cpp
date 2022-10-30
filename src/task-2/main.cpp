//
//  main.cpp
//  synergy-demo-cpp
//
//  Created by Данил Фурман on 30.10.2022.
//

#include<stdio.h>

int main () {
    int first, second;
    
    // Onboarding
    printf("Программа сравнивает два числа. Вам будет предложено ввести два числа, после чего программа сравнит эти числа и выведет результат сравнения чисел на экран \n");
    
    // Input
    printf("\nПожалуйста, введите первое число: \n");
    scanf("%i", &first);
    printf("\nПожалуйста, введите второе число: \n");
    scanf("%i", &second);
    
    // Compare
    if (first > second) {
        printf("\nПервое число %i больше, чем второе число %i", first, second);
    } else if (first < second) {
        printf("\nПервое число %i меньше, чем второе число %i", first, second);
    } else {
        printf("\nПервое число %i и второе число %i равны", first, second);
    }
    
    // Exit
    printf("\n Спасибо! Конец программы \n");
    return 0;
}
