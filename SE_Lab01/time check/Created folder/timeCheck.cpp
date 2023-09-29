#include "stdafx.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	while (true)
	{
		int date;
		cout << "������� ���� � ������� �������� (�������� 04112004)" << endl;
		cin >> date;
		int year = date % 10000;
		int day = date / 1000000;
		int month = date / 10000 % 100;

		//�������� ��������� ������ �� �������
		if (cin.get() != (int)'\n')
		{
			cout << ">>>>>>>>>>> ������� �������� ������, ���������� ��� ��� <<<<<<<<<<<" << endl;
			cin.clear();
			cin.ignore(32767, '\n');
			continue;
		}
		//�������� �� ������������ �����
		else if (dateValidation(day, month, year) == 1)
		{
			cout << ">>>>>>>>>>> ������� �������� ������, ���������� ��� ��� <<<<<<<<<<<" << endl;
			cin.clear();
			continue;
		}
		else
		{
			cout << "-----------------------------------------------------\n\n";

			//������������ ����
			if (leapYear(year) == 1)
				cout << year << " - ���������� ���" << endl;
			else cout << year << " ��� �� �������� ����������" << endl;

			//����� �� ����� ���� � ����
			cout << "��� " << numberOfDay(day, month, year) << " ���� � ����" << endl;

			//������� �������� ���� �� ��
			if (numberOfDay(day, month, year) <= numberOfDay(21, 12, year))
			{
				int result1;
				result1 = numberOfDay(18, 10, year) - numberOfDay(day, month, year);
				cout << "�� ����� ��� �������� (18.10 ����� ����) �������� ����: " << result1 << endl;
			}
			else
			{
				int result1;
				result1 = 365 - numberOfDay(day, month, year) + numberOfDay(18, 10, year + 1) + leapYear(year);
				cout << "�� ����� ���������� ��� �������� (18.10 ���������� ����) �������� ����: " << result1 << endl;
			}

			break;
		}
	}
}