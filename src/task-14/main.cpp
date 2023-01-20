#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	// onboarding
	printf("Вам будет предложенно ввести кол-во строк и столбцов двумерного массива. После чего программа заполнит массив псевдослучайными числами от -2 до 7 \n\n");

	// input array row length
	int rowsLength;
	printf("Введите кол-во строк: ");
	scanf("%i", &rowsLength);

	// input array columns length
	int columnsLength;
	printf("Введите кол-во столбцов: ");
	scanf("%i", &columnsLength);

	// fill array
	srand((time(NULL)));

	int arr[100][100];
	int minRandomNumber = -2;
	int maxRandomNumber = 7;

	for (int row = 0; row < rowsLength; row += 1)
	{
		for (int column = 0; column < columnsLength; column += 1)
		{
			arr[row][column] = minRandomNumber + rand() % (maxRandomNumber - minRandomNumber + 1);
		}
	}

	// print result
	printf("\n\nВывод двумерного массива:\n\n");
	for (int row = 0; row < rowsLength; row += 1)
	{
		for (int column = 0; column < columnsLength; column += 1)
		{
			printf("%4i", arr[row][column]);
		}

		printf("\n\n");
	}

	// end
	printf("\n\nКонец программы.\n");
	return 0;
}