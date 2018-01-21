#include <iostream>
using namespace std;
int main()
{
	int i = 0;
	int n;
	char e;
	do {
		cout << "Введите число для возведения в квадрат: ";
		cin >> n;
		cout << n << " в квадрате = " << n*n << endl;
		cout << "Продолжить? (y/n)" << endl;
		cin >> e;
	} while( e == 'y');
	cout << "Пока" << endl;
}