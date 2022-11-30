#include <stdio.h>

int main()
{
	int start = 1;
	int end = 100;
	int resultSum = 0;

	for (int iterator = start; iterator <= end; iterator += 1)
	{
		resultSum += iterator;
	}

	printf("Cумма чисел от %i до %i равна %i \n", start, end, resultSum);
	return 0;
}