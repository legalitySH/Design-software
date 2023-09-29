#include"Varparm.h"

int Varparm::ivarparm(int count, int value, ...) {
    va_list parameters;
    int mul = 1;

    va_start(parameters, count);

    for (int i = 1; i < count+1; i++)
    {
        int currentParametr = va_arg(parameters, int);
        mul *= currentParametr;
    }

    va_end(parameters);

    return mul;
}

int Varparm::svarparm(short count, ...) {
    va_list parameters;
    va_start(parameters, count);
    int max = 0;
    for (int i = 0; i < count; i++)
    {
        int currentValue = va_arg(parameters, int);
        if (i == 0)continue;
        if (currentValue > max) {
            max = currentValue;
        }
    }
    va_end(parameters);
    return max;
}

double Varparm::fvarparm(int count, ...) {
    va_list parameters;
    va_start(parameters, count);
    float num;
    double sum = 0;
    for (int i = 0; i < count; i++) {
        if (i == count-1) continue;
        num = va_arg(parameters, double);
        sum += num;
    }
    va_end(parameters);
    return sum;
}

double Varparm::dvarparm(int count, ...) {
    va_list parameters;
    va_start(parameters, count);
    double num = 0, sum = 0;
    for (int i = 0; i < count; i++)
    {
        if (i == count - 1)continue;
        num = va_arg(parameters, double);
        sum += num;
    }
    va_end(parameters);
    return float(sum);
}


int main() {
	std::cout << Varparm::ivarparm(1,1) << std::endl;
    std::cout << Varparm::ivarparm(2,1,2) << std::endl;
    std::cout << Varparm::ivarparm(3,1,2,3) << std::endl;
    std::cout << Varparm::ivarparm(7, 1, 2, 3, 4, 5,6,7) << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;


    std::cout << Varparm::svarparm(1, 1024) << std::endl;
    std::cout << Varparm::svarparm(2, 1024, 123) << std::endl;
    std::cout << Varparm::svarparm(3, 1024, 123, 332) << std::endl;
    std::cout << Varparm::svarparm(7, 1024, 123, 332, 5, 566,345,325) << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << Varparm::fvarparm(1, FLT_MAX) << std::endl;
    std::cout << Varparm::fvarparm(2, 4.25f, FLT_MAX) << std::endl;
    std::cout << Varparm::fvarparm(3, 4.25f, 5.65f, FLT_MAX) << std::endl;
    std::cout << Varparm::fvarparm(7, 4.25f, 5.65f, 2.34f, 3.84f,2.25f,3.34f, FLT_MAX) << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << Varparm::dvarparm(1, DBL_MAX) << std::endl;
    std::cout << Varparm::dvarparm(2, 5.25, DBL_MAX) << std::endl;
    std::cout << Varparm::dvarparm(3, 2.25, 3.35, DBL_MAX) << std::endl;
    std::cout << Varparm::dvarparm(7, 2.25, 3.35, 5.25,4.25,6.25,7.125, DBL_MAX) << std::endl;



}