#include <iostream>
#include <cmath>
using namespace std;
float dist (float v, float a)
{
	return v * v * sin (2 * a * M_PI / 180) / 9.81;
}

int main()
{
	float v;
	float a;
	float d;
	cout << "Введите скорость, м/с: ";
	cin >> v;
	float max_d;
	float max_a;
	max_d = 0;
	max_a = 0;

	for (a = 0; a < 90; a+=1)
	{
		d = dist(v,a);
		if (max_d < d)
		{
			max_d = d;
			max_a = a;
		}
	}
	cout << endl << "Максимальное расстояние: " << max_d << endl;
	cout << endl << "Максимальный угол: " << max_a << endl;
}