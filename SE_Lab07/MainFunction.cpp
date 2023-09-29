#include"Call.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int forMul = 3;
	int& address = forMul;
	int cdecl_result = Call::sum_c(4, 5, 1);
	int stdcall_result = Call::mul(address, 2, 5);
	int fastcall_result = Call::sum_f(1, 4, 10);

	cout << "Результат вызова функции с типом вызова _cdecl = " << cdecl_result << endl;
	cout << "Результат вызова функции с типом вызова _stdcall = " << stdcall_result << endl;
	cout << "Результат вызова функции с типом вызова _fastcall = " << fastcall_result << endl;



}