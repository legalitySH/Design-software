#include"Call.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int forMul = 3;
	int& address = forMul;
	int cdecl_result = Call::sum_c(4, 5, 1);
	int stdcall_result = Call::mul(address, 2, 5);
	int fastcall_result = Call::sum_f(1, 4, 10);

	cout << "��������� ������ ������� � ����� ������ _cdecl = " << cdecl_result << endl;
	cout << "��������� ������ ������� � ����� ������ _stdcall = " << stdcall_result << endl;
	cout << "��������� ������ ������� � ����� ������ _fastcall = " << fastcall_result << endl;



}