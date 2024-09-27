#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	cout << "R ="; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	{
		if (!(x <= y && y <= -x) && (pow(y, 2) <= (pow(R, 2) - pow(x, 2))) || (-R <= x && x <= 0 && -R <= y && y <= R) && !(x <= y && y <= -x))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
	for (int i = 0; i < 10; i++)
	{
		x = 2. * R * rand() / RAND_MAX - R;
		y = 2. * R * rand() / RAND_MAX - R;
		if (((x >= -R && x <= 0) && (y >= 0 && y <= sqrt(R * R - x * x)))
			||
			(((x >= R / 2 && x <= R) && (y >= -R && y <= -2 * x + R))))

			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}

