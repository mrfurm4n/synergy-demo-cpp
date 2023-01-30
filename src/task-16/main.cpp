#include <stdio.h>

int main()
{
	// onboarding
	printf("Вам будет предложенно ввести кол-во строк и столбцов двумерного массива, а затем элементы массива. После чего программа выполнит: построчную сортировку (от min до max), поменяет местами первый и последний столбцы \n\n");

	// input array row length
	int rowsLength;
	printf("Введите кол-во строк: ");
	scanf("%i", &rowsLength);

	// input array columns length
	int columnsLength;
	printf("Введите кол-во столбцов: ");
	scanf("%i", &columnsLength);

	// input array elems
	int arr[100][100];
	printf("\n\nВведите элементы массива друг за другом:\n");

	for (int row = 0; row < rowsLength; row += 1)
	{
		for (int column = 0; column < columnsLength; column += 1)
		{
			scanf("%1i", &arr[row][column]);
		}

		printf("\n\n");
	}

	// sort rows (reversed bubble sort with flag)
	for (int row = 0; row < rowsLength; row += 1)
	{
		bool isRowNotSorted = true;

		while (isRowNotSorted)
		{

			for (int column = 0; column < columnsLength - 1; column += 1)
			{

				isRowNotSorted = true;

				if (arr[row][column] > arr[row][column + 1])
				{
					int dump = arr[row][column + 1];

					arr[row][column + 1] = arr[row][column];
					arr[row][column] = dump;
				}
				else
				{
					isRowNotSorted = false;
				}
			}
		}
	}

	// reverse first and last columns
	for (int row = 0; row < rowsLength; row += 1)
	{
		int firstColumn = arr[row][0];
		int lastColumn = arr[row][rowsLength - 1];

		arr[row][0] = lastColumn;
		arr[row][rowsLength - 1] = firstColumn;
	}

	// print result
	printf("\n\nВывод двумерного массива:\n\n");
	for (int row = 0; row < rowsLength; row += 1)
	{
		for (int column = 0; column < columnsLength; column += 1)
		{
			printf("%1i", arr[row][column]);
		}

		printf("\n\n");
	}

	// end
	printf("\n\nКонец программы.\n");
	return 0;
}