#include <stdio.h>

int main()
{
	int first, second;

	// Onboarding
	printf("\nПрограмма сравнивает два числа. Вам будет предложено ввести два числа, после чего программа сравнит эти числа и выведет результат сравнения чисел на экран\n");

	// Input
	printf("\nПожалуйста, введите первое число: ");
	scanf("%i", &first);
	printf("\nПожалуйста, введите второе число: ");
	scanf("%i", &second);

	// Compare
	if (first > second)
	{
		printf("\nПервое число %i больше, чем второе число %i\n", first, second);
	}
	else if (first < second)
	{
		printf("\nПервое число %i меньше, чем второе число %i\n", first, second);
	}
	else
	{
		printf("\nПервое число %i и второе число %i равны\n", first, second);
	}

	return 0;
}