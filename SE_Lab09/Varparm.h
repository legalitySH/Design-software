#pragma once
#include<iostream>
#include<stdarg.h>
#include <cstdarg>

namespace Varparm {
	int ivarparm(int count, int value, ...);
	int svarparm(short count, ...);
	double fvarparm(int count, ...);
	double dvarparm(int count, ...);
}