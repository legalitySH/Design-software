#include "stdafx.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	while (true)
	{
		int date;
		cout << "Введите дату в формате ДДММГГГГ (например 04112004)" << endl;
		cin >> date;
		int year = date % 10000;
		int day = date / 1000000;
		int month = date / 10000 % 100;

		//Проверка введенных данных на символы
		if (cin.get() != (int)'\n')
		{
			cout << ">>>>>>>>>>> Введены неверные данные, попробуйте ещё раз <<<<<<<<<<<" << endl;
			cin.clear();
			cin.ignore(32767, '\n');
			continue;
		}
		//проверка на корректность ввода
		else if (dateValidation(day, month, year) == 1)
		{
			cout << ">>>>>>>>>>> Введены неверные данные, попробуйте ещё раз <<<<<<<<<<<" << endl;
			cin.clear();
			continue;
		}
		else
		{
			cout << "-----------------------------------------------------\n\n";

			//Високосность года
			if (leapYear(year) == 1)
				cout << year << " - Высокосный год" << endl;
			else cout << year << " Год не является высокосным" << endl;

			//Какой по счету день в году
			cout << "Это " << numberOfDay(day, month, year) << " день в году" << endl;

			//Сколько осталось дней до др
			if (numberOfDay(day, month, year) <= numberOfDay(21, 12, year))
			{
				int result1;
				result1 = numberOfDay(18, 10, year) - numberOfDay(day, month, year);
				cout << "До моего дня рождения (18.10 этого года) осталось дней: " << result1 << endl;
			}
			else
			{
				int result1;
				result1 = 365 - numberOfDay(day, month, year) + numberOfDay(18, 10, year + 1) + leapYear(year);
				cout << "До моего ближайшего дня рождения (18.10 следующего года) осталось дней: " << result1 << endl;
			}

			break;
		}
	}
}