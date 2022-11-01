//
//  main.cpp
//  synergy-demo-cpp
//
//  Created by Данил Фурман on 30.10.2022.
//
#include <stdio.h>
#include <string.h>

// Task 3
void authUser () {
    char userLoginInput[] = "";
    int userFirstPassInput, userSecondPassInput;
    
    
    // Users data
    char firstUserLogin[] = "first";
    int firstUserFirstPass = 123;
    int firstUserSecondPass = 345;
    
    char secondUserLogin[] = "second";
    int secondUserFirstPass = 345;
    int secondUserSecondPass = 123;
    
    // Onboarding
    printf("\nПрограмма авторизовывает пользователя. Вам будет предложено ввести ваш логин и два числа-пароля, после чего программа предоставит вам доступ или выдаст ошибку доступа\n");
    
    // Input
    printf("\nПожалуйста, введите ваш логин в системе: ");
    scanf("%str", &userLoginInput);
    printf("\nПожалуйста, введите первый число-пароль: ");
    scanf("%i", &userFirstPassInput);
    printf("\nПожалуйста, введите второй число-пароль: ");
    scanf("%i", &userSecondPassInput);
    
    // Auth
    bool isFirstLoginEqual = strcmp(firstUserLogin, userLoginInput) == 0;
    bool isSecondLoginEqual = strcmp(secondUserLogin, userLoginInput) == 0;
    
    if (isFirstLoginEqual) {
        if ( (firstUserFirstPass == userFirstPassInput) && (firstUserSecondPass == userSecondPassInput) ) {
            printf("\nПоздравляем, вы авторизованы в системе!\n");
        } else {
            printf("\nК сожалению, вам отказано в доступе. Попробуйте ещё раз...\n");
        }
    } else if (isSecondLoginEqual) {
        if ( (secondUserFirstPass == userFirstPassInput) && (secondUserSecondPass == userSecondPassInput) ) {
            printf("\nПоздравляем, вы авторизованы в системе!\n");
        } else {
            printf("\nК сожалению, вам отказано в доступе. Попробуйте ещё раз...\n");
        }
    } else {
        printf("\nК сожалению, пользователя с такими логином не найдено. Попробуйте ещё раз...\n");
    }
}

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
    
    if (programChoice == 3) {
        authUser();
    }

    printf("\nКонец программы\n");
    return 0;
}

