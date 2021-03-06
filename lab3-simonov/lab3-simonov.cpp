#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const double PI = 3.14;
	double startX = 0, endX = 0, y = 0, step = 0;

	cout << "Input start of range, end of range and step: "; cin >> startX >> endX >> step;
	cout << "Table of ranges with range [" << startX << ";" << endX << "]" << endl;
	cout << "X      Y" << endl;
	while (endX >= startX)
	{
		y = (1 - 2 * pow(sin(startX), 2)) / (1 + sin(2 * startX));
		cout.precision(3);
		cout << startX << "   " << y << endl;
		startX += step;
	}

	system("pause");
	return 0;
}

