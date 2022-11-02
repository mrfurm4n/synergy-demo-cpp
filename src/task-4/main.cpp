#include <stdio.h>

int main()
{
	int userInput;

	// Onboarding
	printf("\nПрограмма показывает день недели. Вам будет предложено ввести число от 1 до 7, после чего программа покажет вам день недели\n");

	// Enter
	printf("Введите число от 1 до 7: \n");
	scanf("%i", &userInput);

	// Switch
	switch (userInput)
	{
	case 1:
	{
		printf("Понедельник\n");
	}
	break;
	case 2:
	{
		printf("Вторник\n");
	}
	break;
	case 3:
	{
		printf("Среда\n");
	}
	break;
	case 4:
	{
		printf("Четверг\n");
	}
	break;
	case 5:
	{
		printf("Пятница\n");
	}
	break;
	case 6:
	{
		printf("Суббота\n");
	}
	break;
	case 7:
	{
		printf("Воскресенье\n");
	}
	break;
	default:
	{
		printf("Error\n");
	}
	}

	return 0;
}