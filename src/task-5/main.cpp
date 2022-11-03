#include <stdio.h>

int main()
{
	// Onboarding
	printf("Вам будет предложено ввести дату вашего рождения в формате (1.1.1990), после чего программа покажет вам результат своей работы\n");
	printf("\nПрограмма показывает: \n 1) Родились ли вы в високосный год \n 2) Какой ваш год (зверь) по восточному календарю \n 3) Какой у вас знак зодиака \n");

	// Enter data
	int userDay, userMonth, userYear;

	printf("\nВведите день своего рождения: ");
	scanf("%i", &userDay);
	printf("Введите месяц своего рождения: ");
	scanf("%i", &userMonth);
	printf("Введите год своего рождения: ");
	scanf("%i", &userYear);

	// Start result
	printf("\nРезультаты:\n");

	// Leap year
	if (userYear % 4 == 0)
	{
		printf("1) Вы родились в високосный год\n");
	}
	else
	{
		printf("1) Вы родились не в високосный год\n");
	}

	// Eastern calendar
	int easternYearPointer = userYear % 12;

	switch (easternYearPointer)
	{
	case 0:
	{
		printf("2) Вы родились в год Обезьяны\n");
	}
	break;
	case 1:
	{
		printf("2) Вы родились в год Петуха\n");
	}
	break;
	case 2:
	{
		printf("2) Вы родились в год Собаки\n");
	}
	break;
	case 3:
	{
		printf("2) Вы родились в год Свиньи\n");
	}
	break;
	case 4:
	{
		printf("2) Вы родились в год Крысы\n");
	}
	break;
	case 5:
	{
		printf("2) Вы родились в год Быка\n");
	}
	break;
	case 6:
	{
		printf("2) Вы родились в год Тигра\n");
	}
	break;
	case 7:
	{
		printf("2) Вы родились в год Кролика\n");
	}
	break;
	case 8:
	{
		printf("2) Вы родились в год Дракона\n");
	}
	break;
	case 9:
	{
		printf("2) Вы родились в год Змеи\n");
	}
	break;
	case 10:
	{
		printf("2) Вы родились в год Лошади\n");
	}
	break;
	case 11:
	{
		printf("2) Вы родились в год Козы\n");
	}
	break;
	default:
		printf("2) Error\n");
	}

	// Zodiac sign
	if ((userMonth == 12 && userDay > 21) || (userMonth == 1 && userDay < 21))
	{
		printf("3) Ваш знак зодика: Козерог\n");
	}
	else if ((userMonth == 1 && userDay > 20) || (userMonth == 2 && userDay < 21))
	{
		printf("3) Ваш знак зодика: Водолей\n");
	}
	else if ((userMonth == 2 && userDay > 20) || (userMonth == 3 && userDay < 21))
	{
		printf("3) Ваш знак зодика: Рыбы\n");
	}
	else if ((userMonth == 3 && userDay > 20) || (userMonth == 4 && userDay < 21))
	{
		printf("3) Ваш знак зодика: Овен\n");
	}
	else if ((userMonth == 4 && userDay > 20) || (userMonth == 5 && userDay < 21))
	{
		printf("3) Ваш знак зодика: Телец\n");
	}
	else if ((userMonth == 5 && userDay > 20) || (userMonth == 6 && userDay < 22))
	{
		printf("3) Ваш знак зодика: Близнецы\n");
	}
	else if ((userMonth == 6 && userDay > 21) || (userMonth == 7 && userDay < 23))
	{
		printf("3) Ваш знак зодика: Рак\n");
	}
	else if ((userMonth == 7 && userDay > 22) || (userMonth == 8 && userDay < 24))
	{
		printf("3) Ваш знак зодика: Лев\n");
	}
	else if ((userMonth == 8 && userDay > 23) || (userMonth == 9 && userDay < 24))
	{
		printf("3) Ваш знак зодика: Дева\n");
	}
	else if ((userMonth == 9 && userDay > 23) || (userMonth == 10 && userDay < 22))
	{
		printf("3) Ваш знак зодика: Весы\n");
	}
	else if ((userMonth == 10 && userDay > 23) || (userMonth == 11 && userDay < 23))
	{
		printf("3) Ваш знак зодика: Скорпион\n");
	}
	else if ((userMonth == 11 && userDay > 22) || (userMonth == 12 && userDay < 22))
	{
		printf("3) Ваш знак зодика: Стрелец\n");
	}
	else
	{
		printf("3) Error\n");
	}

	return 0;
}
