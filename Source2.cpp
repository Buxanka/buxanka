#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
// ��������� �������. �������� ��� ���� ����� ������.
// � ������� � ���� �������� ���� ������
int sum(int num1, int num2) {
	return num1 + num2;
}

template <typename T> T newSum(T num1, T num2) {
	return num1 + num2;
}


int main(void) {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));


	cout << newSum(10, 6) << endl;
	cout << newSum(1.5, 2.4) << endl;
	cout << newSum(true, false) << endl;
	short a = 5, b = 7;
	cout << newSum(a, b) << endl;







	return 0;
}