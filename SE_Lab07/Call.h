#pragma once
#include<iostream>
using namespace std;
namespace Call {
	int _cdecl sum_c(int, int, int);
	int _stdcall mul(int&, int, int);
	int _fastcall sum_f(int, int, int);
}