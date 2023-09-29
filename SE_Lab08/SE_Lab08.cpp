#include<iostream>

using namespace std;

float average(int c, int d , int e , int f,int g,int a = 5, int b = 3) {
	int sum;
	sum  = c + d + e + f + g + a + b;
	float average = sum / 7.0;
	return average;
}

int main() {
	setlocale(LC_ALL, "rus");
	cout << "5 параметров: " << average(1, 2, 3, 4, 5) << endl;
	cout << "7 параметров: " << average(1, 2, 3, 4, 5, 6, 7) << endl;
}
