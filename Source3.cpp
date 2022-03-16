#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
// Пример с масивом


template <typename T> void showArray(T array[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << array[i] << ", ";
	cout << "\b\b]\n";
}



int main(void) {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));


	int a1[5] = { 1, 5, 2, 8, 10 };
	double a2[4] = { 1.2, 1.3, 1.4, 1.5 };

	cout << "Массив int:\n";
	showArray(a1, 5);
	cout << "Массив double:\n";
	showArray(a2, 4);
	//test




	return 0;
}