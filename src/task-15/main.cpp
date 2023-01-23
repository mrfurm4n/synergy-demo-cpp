#include <stdio.h>

int main()
{
	// onboarding
	printf("Вам будет предложенно ввести кол-во строк и столбцов двумерного массива, а затем элементы массива. После чего программа выполнит инверсию по главной диагонали и выведет на экран двумерный массив \n\n");

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

	// reverse main
	for (int row = 0; row < rowsLength / 2; row += 1)
	{
		int mirrorRow = rowsLength - row - 1;
		int mirrorColumn = row;

		int dump = arr[mirrorRow][mirrorColumn];

		arr[mirrorRow][mirrorColumn] = arr[mirrorColumn][mirrorRow];
		arr[mirrorColumn][mirrorRow] = dump;
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