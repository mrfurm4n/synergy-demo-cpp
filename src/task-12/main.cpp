#include <stdio.h>

int main()
{
	// onboarding
	printf("Вам будет предложенно ввести длину одномерного массива, а затем элементы массива. После чего программа выведет на экран: максимальное значение, минимальное, сумму и среднее значение \n\n");

	// input array length
	int arrayLength;
	printf("Введите длину массива: ");
	scanf("%i", &arrayLength);

	// input array elems
	int arr[100];
	printf("\n\nВведите элементы массива друг за другом:\n");

	for (int i = 0; i < arrayLength; i += 1)
	{
		scanf("%1i", &arr[i]);
	}

	// make result
	int max, min, sum;
	max = min = sum = arr[0];

	for (int i = 1; i < arrayLength; i += 1)
	{
		sum += arr[i];

		if (arr[i] > max)
		{
			max = arr[i];
		}

		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	// print result
	printf("\n\nВывод результатов:\n\n");

	printf("Среднее значение: %f \n", (float)sum / (float)arrayLength);
	printf("Макс. значение: %i \n", max);
	printf("Мин. значение: %i \n", min);
	printf("Сумма значений: %i \n", sum);

	// end
	printf("\n\nКонец программы.\n");
	return 0;
}