#include <stdio.h>

int main()
{
	// onboarding
	printf("Вам будет предложенно ввести длину одномерного массива, а затем элементы массива. После чего программа отсортирует массив от меньшего к большего и выведет элементы массива на экран \n\n");

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

	// sort array
	bool flag = true;
	while (flag)
	{
		flag = false;

		for (int index = 0; index < arrayLength - 1; index += 1)
		{
			if (arr[index] > arr[index + 1])
			{
				int buffer;
				buffer = arr[index + 1];

				arr[index + 1] = arr[index];
				arr[index] = buffer;

				flag = true;
			}
		}
	}

	// print array elems
	printf("\n\nВывод элементов массива:\n");
	for (int i = 0; i < arrayLength; i += 1)
	{
		printf("%4i", arr[i]);
	}

	// end
	printf("\n\nКонец программы.\n");
	return 0;
}