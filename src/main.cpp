//
//  main.cpp
//  synergy-demo-cpp
//
//  Created by Данил Фурман on 30.10.2022.
//

#import "./task-1/index.hpp"
#import "./task-2/index.hpp"

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

