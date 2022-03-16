#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
//Перегруженные функции
//При вызове фунции программой, она ищет подходящую (например: int - int) функцию 
// Аргументы всегда должны быть разными
int maxEl(int num1, int num2) {
	cout << "INT\n";
	if (num1 > num2)
		return num1;
	return num2;
}

double maxEl(double num1, double num2) {
	cout << "DOUBLE\n";
	if (num1 > num2)
		return num1;
	return num2;
}

bool maxEl(int num1, double num2) {
	cout << "BOOL\n";
	if (num1 > num2)
		return true;
	return false;
}

int maxEl(int num1, int num2, int num3) {
	cout << "THREE\n";
	if (num1 >= num2 && num1 >= num3)
		return num1;
	if (num2 >= num1 && num2 >= num3)
		return num2;
	return num3;
}


int main(void) {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int n, m;

	cout << maxEl(5, 10) << endl;
	cout << maxEl(1.5, 2.2) << endl;
	cout << maxEl(10, 10.1) << endl;
	cout << maxEl(5, 7, 10) << endl;




	return 0;
}