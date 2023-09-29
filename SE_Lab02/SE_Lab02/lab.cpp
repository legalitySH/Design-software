#include<iostream>

using namespace std;

void print() {
	cout << "some text";
}

int main()
{
	setlocale(LC_ALL, "rus");
	bool t = true;
	bool f = false;
	char ascii = 'h';
	char windows1251 = 'и';
	wchar_t symbol = L's';
	wchar_t smb = L'ш';
	short positive_X = 9 + 14;
	short negative_X = -1 * (9 + 14);
	cout << "X = " << positive_X << " ---> " << hex << positive_X << dec << endl;
	cout << "-X = " << negative_X << " ---> " << hex << negative_X << dec << endl;
	cout << "—амое большое шестнадцатеричное значение short = " << hex << SHRT_MAX << dec << endl;
	cout << "—амое маленькое шестнадцатеричное значение short = " << hex << SHRT_MIN << dec << endl;
	short min_short = SHRT_MIN; 
	short max_short = SHRT_MAX;
	unsigned short positive_MaxShort = USHRT_MAX;
	unsigned short positive_MinShort = NULL;
	cout << "—амое большое шестнадцатеричное значение unsigned short = " << hex << positive_MaxShort << dec << endl;
	cout << "—амое маленькое шестнадцатеричное значение unsigned short = " << hex << positive_MinShort << dec << endl;
	int positive_Y = 10 + 14;
	int negative_Y = -1 * (10 + 14);
	cout << "Y = " << positive_X << " ---> " << hex << positive_X << dec << endl;
	cout << "-Y = " << negative_X << " ---> " << hex << negative_X << dec << endl;
	int max_int = INT_MAX;
	int min_int = INT_MIN;
	cout << "—амое большое шестнадцатеричное значение int = " << hex << max_int << dec << endl;
	cout << "—амое маленькое шестнадцатеричное значение int = " << hex << min_int << dec << endl;
	unsigned int positive_MaxInt = UINT_MAX;
	unsigned int positive_MinInt = NULL;
	cout << "—амое большое шестнадцатеричное значение unsigned int = " << hex << positive_MaxInt << dec << endl;
	cout << "—амое маленькое шестнадцатеричное значение unsigned int = " << hex << positive_MinInt << dec << endl;
	long positive_Z = 11 + 14;
	long negative_Z = -1 * (11 + 14);
	cout << "Z = " << positive_Z << " ---> " << hex << positive_Z << dec << endl;
	cout << "-Z = " << negative_Z << " ---> " << hex << negative_Z << dec << endl;
	cout << "—амое большое шестнадцатеричное значение long = " << hex << LONG_MAX << dec << endl;
	cout << "—амое маленькое шестнадцатеричное значение long = " << hex << LONG_MIN << dec << endl;
	unsigned long positive_MaxLong = ULONG_MAX;
	unsigned long positive_MinLong = NULL;
	cout << "—амое большое шестнадцатеричное значение unsigned long = " << hex << positive_MaxLong << dec << endl;
	cout << "—амое маленькое шестнадцатеричное значение unsigned long = " << hex << positive_MinLong << dec << endl;
	float positive_S = 1 + 14;
	float negative_S = -1 * (1 + 14);
	cout << "S = " << positive_S << " ---> " << hex << positive_S << dec << endl;
	cout << "-S = " << negative_S << " ---> " << hex << negative_S << dec << endl;
	cout << "—амое большое шестнадцатеричное значение long = " << hex << FLT_MAX << dec << endl;
	cout << "—амое маленькое шестнадцатеричное значение long = " << hex << FLT_MIN << dec << endl;
	float floatPositiveObject = 1;
	float floatNegativeObject = -1;
	float positive_INF = floatPositiveObject / 0;
	float negative_INF = floatNegativeObject / 0;
	float negative_IND = positive_INF / negative_INF;
	cout << "#INF = " << positive_INF << endl;
	cout << "#-INF = " << negative_INF << endl;
	cout << "#-IND = " << negative_IND << endl;

	double doubleElement = rand() % 100;
	char* cptr = &ascii;
	wchar_t* wcptr = &smb;
	short* sptr = &positive_X;
	int* iptr = &positive_Y;
	float* fptr = &positive_S;
	double* dptr = &doubleElement;

	cptr += 3;
	wcptr += 3;
	sptr += 3;
	iptr += 3;
	fptr += 3;
	dptr += 3;

	void(*ptrfunction)() = print; // «анимает 8 байт


	


	



	

}