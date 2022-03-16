#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
// pow - возведение в степень
inline int myPow(int num) {
	int res = num * num;
	return res;
}
// сложные конструкции нельзя использовать во встраимые функции

inline int absolute(int num) {
	return num < 0 ? -num : num;
}
// модуль числа
int main(void) {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int n;

	cin >> n;
	cout << n << " * " << n << " = " << myPow (n) << endl;



	return 0;
}