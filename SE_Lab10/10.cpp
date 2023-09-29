#include <iostream>
#include <algorithm>
#include <vector>
#include<string>

using namespace std;

template<typename T>
auto isPositive = [](T someValue) -> bool {
    if constexpr (is_same_v<T, char>) {
        return someValue >= 1 && someValue <= 127;
    }
    else {
        return someValue > 0;
    }
};

template<typename T>
auto connectValues = [](T firstValue, T secondValue) -> string {
    string result;
    if constexpr (is_same_v<T, char*>) {
        result = string(firstValue) + string(secondValue);
    }
    else if constexpr (is_same_v<T, int> || is_same_v<T, float>)
    {
        result = to_string(firstValue) + to_string(secondValue);
    }
    else {
        result = firstValue + secondValue;
    }
    return result;

};

template<typename T>
auto isPalindrome = [](T value) -> bool {
    bool flag = false;
    if constexpr (is_same_v<T, char*>) {
        string real_value; string reversed_value;
        real_value = string(value);
        reversed_value = string(value);
        reverse(reversed_value.begin(), reversed_value.end());
        if (real_value == reversed_value) {
            flag = true;
        }
        else
        {
            flag = false;
        }
    }
    if constexpr (is_same_v<T, int>) {
        string real_value; string reversed_value;
        real_value = to_string(value);
        reversed_value = to_string(value);
        reverse(reversed_value.begin(), reversed_value.end());
        if (real_value == reversed_value) {
            flag = true;
        }
        else
        {
            flag = false;
        }
    }
    return flag;
};

template<typename T>
auto longerString = [](T str1, T str2) -> string {
    if constexpr (is_same_v<T, char*>) {
        string s1 = string(str1);
        string s2 = string(str2);
        if (s1.size()>s2.size()) {
            return s1;
        }
        else if (s2.size()>s1.size()) {
            return s2;
        }
        else
        {
            return "������ ���������� �������� ����������!";
        }
    }
    else if constexpr (is_same_v<T, int> || is_same_v<T, float>) {
        if (to_string(str1).length() > to_string(str2).length()) {
            return to_string(str1);
        }
        else if (to_string(str1).length() < to_string(str2).length()) {
            return to_string(str2);
        }
        else
        {
            return "������ ���������� �������� ����������!";
        }
    }
    return "";
};

int main()
{
    setlocale(LC_ALL, "Rus");
    vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int target1 = 3;
    int num_items1 = count(v.begin(), v.end(), target1);
    cout << "�����: " << target1 << " ����������: " << num_items1 << endl;
    int num_items3 = count_if(v.begin(), v.end(), [](int i) {return i % 3 == 0; });
    cout << "���������� ���������, ������� 3: " << num_items3 << endl << endl;

    cout << "������, ������ ����������" << endl;

    for (auto i : v) [i]()
    {
        if (i % 3 == 0)
            cout << i << " ";
    }();

    cout << "\n������ � �����������" << endl;
    for (auto i : v) [](auto i)
    {
        if (i % 3 == 0)
            cout << i << " ";
    }(i);

    cout << "\n������ ��� ����������" << endl;
    for (auto i : v) [i]()
    {
        if (i % 3 == 0)
            cout << i << " ";
    }();


    cout << endl;
    system("pause");

    cout << "\n\n�������������� �������!\n\n";

    cout << "�������������� ������� #1\n";
    int number;
    cout << "������� �����: "; cin >> number;
    
    auto isPositive = [](int someNumber) -> bool {return someNumber > 0;};

    if (isPositive(number))
    {
        cout << "�����  �������������!\n";
    }
    else
    {
        cout << "����� ������������� ���� ����� 0!\n";
    }

    cout << endl;
    cout << "\n�������������� ������� #2\n";

    int intValue; float floatValue; char charValue;

    cout << "������� �������� ���� int: "; cin >> intValue;
    cout << "������� �������� ���� float: "; cin >> floatValue;
    cout << "������� �������� ���� char: "; cin >> charValue;

    cout << "\nINT - ";
    if (isPositive(intValue)) {
        cout << "�������������!\n";
    }
    else
    {
        cout << "������������� ���� ����� 0\n";
    }
    
    cout << "FLOAT - ";
    if (isPositive(floatValue))
    {
        cout << "�������������!\n";
    }
    else
    {
        cout << "������������� ���� ����� 0\n";
    }
    cout << "CHAR - ";
    if (isPositive(charValue))
    {
        cout << "�������������!\n";
    }
    else
    {
        cout << "������������� ���� ����� 0\n";
    }

    cout << endl;
    cout << "\n�������������� ������� #3\n";
    string str1, str2;
    cin.ignore();
    cout << "������� ������ ������: "; getline(cin, str1);
    cout << "������� ������ ������: "; getline(cin, str2);

    auto connectStrings = [](string firstString, string secondString) -> string {
        string resultString = firstString + secondString;
        return resultString;
    };

    cout << "\n��������� ������������: " << connectStrings(str1, str2) << endl;
    cout << endl;

    cout << "\n�������������� ������� #4\n";

    cout << "������� ������ ������: "; getline(cin, str1);
    cout << "������� ������ ������: "; getline(cin, str2);

    auto biggestString = [](string firstString, string secondString) -> string {
        if (firstString.size()>secondString.size())
        {
            return firstString;
        }
        else if (secondString.size() > firstString.size())
        {
            return secondString;
        }
        else
        {
            return "������ ��������� �������!";
        }
    };

    cout << "��������� ��������� �����: " << biggestString(str1, str2);
    cout << endl;

    cout << "\n�������������� ������� #5\n";


    int intValue_; float floatValue_;
    string s1, s2;
    cout << "������� 1 �������� ���� int: "; cin >> intValue;
    cout << "������� 2 �������� ���� int: "; cin >> intValue_;
    cout << "������� 1 �������� ���� float: "; cin >> floatValue;
    cout << "������� 2 �������� ���� float: "; cin >> floatValue_;
    cin.ignore();
    cout << "������� 1 �������� ���� char: "; getline(cin, s1);
    cout << "������� 2 �������� ���� char: "; getline(cin, s2);

    char* charArray = new char[s1.size() + 1];
    strcpy(charArray, s1.c_str());
    char* charArray_ = new char[s2.size() + 1];
    strcpy(charArray_, s2.c_str());


    cout << "\nINT - " << connectValues<int>(intValue, intValue_) << endl;
    cout << "FLOAT - " << connectValues<float>(floatValue, floatValue_) << endl;
    cout << "CHAR - " << connectValues<char*>(charArray,charArray_) << endl;

    delete[] charArray;
    delete[] charArray_;
    cout << endl;

    cout << "������� 1 �������� ���� int: "; cin >> intValue;
    cout << "������� 2 �������� ���� int: "; cin >> intValue_;
    cout << "������� 1 �������� ���� float: "; cin >> floatValue;
    cout << "������� 2 �������� ���� float: "; cin >> floatValue_;
    cin.ignore();
    cout << "������� 1 �������� ���� char: "; getline(cin, s1);
    cout << "������� 2 �������� ���� char: "; getline(cin, s1);

    charArray = new char[s1.size() + 1];
    strcpy(charArray, s1.c_str());
    charArray_ = new char[s2.size() + 1];
    strcpy(charArray_, s2.c_str());

    cout << "\nINT - " << longerString<int>(intValue, intValue_) << endl;
    cout << "FLOAT - " << longerString<float>(floatValue, floatValue_) << endl;
    cout << "CHAR - " << longerString<char*>(charArray,charArray_) << endl;
    delete[] charArray;
    delete[] charArray_;
    cout << endl;

    cout << "\n�������������� ������� #6\n";

    cout << "���������� �������� �� ��������� ������ �����������!" << endl;

    string isPol;

    cout << "������� �������� ���� int: "; cin >> intValue;
    cin.ignore();
    cout << "������� �������� ���� char: "; getline(cin, isPol);

    charArray = new char[isPol.size() + 1];
    strcpy(charArray, isPol.c_str());

    cout << "\nINT - ";
    if (isPalindrome<int>(intValue)) {
        cout << "���������\n";
    }
    else
    {
        cout << "�� ���������\n";
    }
    cout << "CHAR - ";
    if (isPalindrome<char*>(charArray)) {
        cout << "���������\n";
    }
    else
    {
        cout << "�� ���������\n";
    }


    return 0;
}

