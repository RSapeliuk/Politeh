#include <iostream>
#include <vector>
#include <math.h>

void main() {
	std::vector<int> x;
	std::vector<int> y;
	double d, D = 0;
	int X, Y;

	for (int i = 0; i < 100; i++)
	{
		int randX = rand() % 1000;
		x.push_back(randX);
		int randY = rand() % 1000;
		y.push_back(randY);
	}
	for (int j = 0; j < x.size(); j++)
	{
		for (int k = 0; k < y.size(); k++)
		{
			X = abs(x[j] - x[k]);
			Y = abs(y[j] - y[k]);
			d = sqrt((X * X) + (Y * Y));
			if (d > D) D = d;

		}
	}
	std::cout << "R = " << D / 2;
}