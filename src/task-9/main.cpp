#include <stdio.h>

int main()
{
	// onboarding
	printf("Вам будет предложено ввести n чисел. Затем программа посчитает: минимальное и максимальное число, сумму чисел, среднее арифмитическое \n\n");

	// enter counter of numbers
	int numbersCount = 0;
	printf("Количество чисел, которое вы будете вводить: ");
	scanf("%i", &numbersCount);

	// input numbers
	int resultSum = 0;
	int currentNumber, minNumber, maxNumber;
	for (int iterator = 1; iterator <= numbersCount; iterator += 1)
	{
		// input number
		printf("Введите число №%i: ", iterator);
		scanf("%i", &currentNumber);

		// sum
		resultSum += currentNumber;

		// init min & max (first input)
		if (iterator == 1)
		{
			minNumber = currentNumber;
			maxNumber = currentNumber;
		}

		// search min
		if (currentNumber <= minNumber)
		{
			minNumber = currentNumber;
		}

		// search max
		if (currentNumber >= maxNumber)
		{
			maxNumber = currentNumber;
		}
	}

	// results
	printf("Результаты программы: \n");
	printf("Cумма чисел равна: %i \n", resultSum);
	printf("Минимальное число: %i \n", minNumber);
	printf("Максимальное число: %i \n", maxNumber);
	printf("Среднеарифимтическое: %i \n", (resultSum / numbersCount));
	return 0;
}