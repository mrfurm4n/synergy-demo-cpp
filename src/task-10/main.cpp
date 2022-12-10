#include <stdio.h>

int main()
{
	// onboarding
	printf("Вам будет предложенно ввести длину одномерного массива, а затем элементы массива. После чего программа выведет элементы массива на экран \n\n");

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