#include <iostream>
#include <cmath>
using namespace std;
float main(void)
{
	setlocale(LC_ALL, "Rus");
	float a, b, c;
	cout << "Введите параметр a: ";
	cin >> a;
	cout << "Введите параметр b: ";
	cin >> b;
	cout << "Введите параметр c: ";
	cin >> c;
	float dis = pow(b, 2.0) - 4.0 * a * c;
	if (dis < 0.0)
	{
		cout << "Корней нет." << endl;
	}
	else if (dis == 0.0)
	{
		float xo = (-b - sqrt(dis)) / (2.0 * a);
		cout << "Получен только один корень: " << xo << endl;
	}
	else if (dis > 0.0)
	{
		float xo = (-b - sqrt(dis)) / (2.0 * a);
		float xt = (-b + sqrt(dis)) / (2.0 * a);
		cout << "Полученные корни: " << xo << ", " << xt << endl;
	}

	return 0;
}