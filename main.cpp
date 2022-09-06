#include <iostream>
#include <cmath>
using namespace std;
 
void dz2_1()
{
	double R, r, h, l;
	const double PI = 3.141592653589793;
	cout << "enter the larger radius, the smaller radius, the height and the forming cone: " << endl;
	if (cin >> R >> r >> h >> l) {
		if (R <= 0 or r <= 0 or h <= 0 or l <= 0) {
			cout << "error, all values must be greater than 0";
		}
		else {
			cout << "V = " << (static_cast<long double>(1) / 3) * PI * h * (R * R + R * r + r * r) << endl;
			cout << "S = " << PI * (R * R + (R + r) * l + r * r) << endl;
		}
	}
	else cout << "incorrect data"<<endl;
	
}

void dz2_2() {
	long double a, x;
	cout << "Enter x and a: ";
	if (cin>>x>>a)
	{
		if (abs(x) < 1) 
		{
			if (x != 0) 
			{
				cout << "w = " << a * log(abs(x)) << endl;
			}
			else
			{
				cout << "Error, the logarithm argument must be greater than 0" << endl;
			}
		}
		else
		{
			if (x * x < a) {
				cout << "w = " << sqrt(a - x * x);
			}
			else {
				cout << "Error, there is a negative number under the root sign" << endl;
			}
		}
	}
	else cout << "Incorrect data" << endl;
}

void dz2_3()
{
	double x, y, b;
	cout << "Enter x, y, b: ";
	if (cin >> x>> y>> b) {
		if (b - y > 0 && b - x >= 0) {
			cout << "z = " << log(b - y) * sqrt(b - x) << endl;
		}
		else {
			if (b - y <= 0) cout << "Error, the logarithm argument must be greater than 0" << endl;
			if (b - x < 0) cout << "Error, there is a negative number under the root sign";
		}
	}
	else cout << "Incorrect data"<<endl;
}

void dz2_4()
{
	int N=0;
	cout << "Enter N: ";
	if (cin >> N && N > 0) {
		for (int i = 1; i <= 10; i++) {
			cout << "N = " << N << endl;
			N++;
		}
	}
	else cout << "Incorrect data" << endl;
}

void dz2_5()
{
	for (double x = -4; x <= 4; x += 0.5)
	{
		if (x - 1 != 0) {
			cout << "x = " << x << " " << "y = " << (x * x - 2 * x + 2) / (x - 1) << endl;
		}
		else cout << "x = " << x << " " << "y = Error" << endl;
	}
}

int main()
{
	dz2_5();
}