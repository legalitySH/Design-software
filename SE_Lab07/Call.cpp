#include"Call.h"

namespace Call {
	int _cdecl sum_c(int a, int b, int c)
	{
		int sum = 0;
		sum = a + b + c;
		return sum;
	}

	int _stdcall mul(int& a, int b, int c)
	{
		int mul_result = 1;
		mul_result = a * b * c;
		return mul_result;

	}
	int _fastcall sum_f(int a, int b, int c)
	{
		int sum = a + b + c;
		return sum;
	}
}