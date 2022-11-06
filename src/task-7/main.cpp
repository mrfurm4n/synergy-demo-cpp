#include <stdio.h>

int main()
{
	// multiplication table
	printf("Таблица умножения на 5 от 1 до 10:\n\n");
	for (int i = 1; i <= 10; i++)
	{
		int multiplication = 5 * i;
		printf("5 * %i = %i \n", i, multiplication);
	}

	// guessing a number
	int hiddenNumber = 7;
	int userNumber = 0;
	while (userNumber != hiddenNumber)
	{
		printf("\n\nУгадайте загаданное число: ");
		scanf("%i", &userNumber);

		if (userNumber != hiddenNumber)
		{
			if (userNumber > hiddenNumber)
			{
				printf("Ваше число больше загаданного\n");
			}
			else if (userNumber < hiddenNumber)
			{
				printf("Ваше число меньше загаданного\n");
			}

			if (hiddenNumber % 2 == 0)
			{
				printf("Загаданное число делится на 2\n");
			}
			else
			{
				printf("Загаданное число не делится на 2\n");
			}

			if (hiddenNumber % 3 == 0)
			{
				printf("Загаданное число делится на 3\n");
			}
			else
			{
				printf("Загаданное число не делится на 3\n");
			}
		}
	}
	printf("\n\nПоздравляем, вы угадали число!\n");

	return 0;
}