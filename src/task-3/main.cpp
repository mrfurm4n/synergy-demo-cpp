#include <stdio.h>
#include <string.h>

int main()
{
	char userLoginInput[] = "";
	int userFirstPassInput, userSecondPassInput;

	// Users data
	char firstUserLogin[] = "first";
	int firstUserFirstPass = 123;
	int firstUserSecondPass = 345;

	char secondUserLogin[] = "second";
	int secondUserFirstPass = 345;
	int secondUserSecondPass = 123;

	// Onboarding
	printf("\nПрограмма авторизовывает пользователя. Вам будет предложено ввести ваш логин и два числа-пароля, после чего программа предоставит вам доступ или выдаст ошибку доступа\n");

	// Input
	printf("\nПожалуйста, введите ваш логин в системе: ");
	scanf("%s", &userLoginInput);
	printf("\nПожалуйста, введите первый число-пароль: ");
	scanf("%i", &userFirstPassInput);
	printf("\nПожалуйста, введите второй число-пароль: ");
	scanf("%i", &userSecondPassInput);

	// Auth
	bool isFirstLoginEqual = strcmp(firstUserLogin, userLoginInput) == 0;
	bool isSecondLoginEqual = strcmp(secondUserLogin, userLoginInput) == 0;

	if (isFirstLoginEqual)
	{
		if ((firstUserFirstPass == userFirstPassInput) && (firstUserSecondPass == userSecondPassInput))
		{
			printf("\nПоздравляем, вы авторизованы в системе!\n");
		}
		else
		{
			printf("\nК сожалению, вам отказано в доступе. Попробуйте ещё раз...\n");
		}
	}
	else if (isSecondLoginEqual)
	{
		if ((secondUserFirstPass == userFirstPassInput) && (secondUserSecondPass == userSecondPassInput))
		{
			printf("\nПоздравляем, вы авторизованы в системе!\n");
		}
		else
		{
			printf("\nК сожалению, вам отказано в доступе. Попробуйте ещё раз...\n");
		}
	}
	else
	{
		printf("\nК сожалению, пользователя с такими логином не найдено. Попробуйте ещё раз...\n");
	}

	return 0;
}