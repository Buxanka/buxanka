#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
// pow - ���������� � �������
inline int myPow(int num) {
	int res = num * num;
	return res;
}
// ������� ����������� ������ ������������ �� ��������� �������

inline int absolute(int num) {
	return num < 0 ? -num : num;
}
// ������ �����
int main(void) {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int n;

	cin >> n;
	cout << n << " * " << n << " = " << myPow (n) << endl;



	return 0;
}