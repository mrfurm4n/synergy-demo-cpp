#include <stdio.h>

int main()
{
	// Task 1, print Hello x9
	printf("Вывод Hello 9 раз: \n");
	int helloCounter = 1;
	while (helloCounter <= 9)
	{
		printf("Hello\n");
		helloCounter += 1;
	}
	printf("\n\n");

	// Task 2, print numbers 0-14
	printf("Вывод чисел от 0 до 14: \n");

	int firstNumberCounter = 0;
	while (firstNumberCounter < 15)
	{
		printf("%i\n", firstNumberCounter);
		firstNumberCounter += 1;
	}
	printf("\n\n");

	// Task 3, print odd numbers 0-14
	printf("Вывод нечётных чисел от 0 до 14: \n");

	int secondNumberCounter = 0;
	while (secondNumberCounter < 15)
	{
		if ((secondNumberCounter % 2) != 0)
		{
			printf("%i\n", secondNumberCounter);
		}
		secondNumberCounter += 1;
	}
	printf("\n\n");

	// Task 4, sum of 5-15
	int resultSum = 0;
	int sumCounter = 5;
	while (sumCounter <= 15)
	{
		resultSum += sumCounter;
		sumCounter += 1;
	}
	printf("Сумма чисел от 5 до 15 равна: %i\n", resultSum);

	return 0;
}