#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter the value of a,b and c: ";
	cin >> a >> b >> c;
	if (a == 0)
	{
		cout << "The equation is not quadratic.";
		return 0;
	}
	int d = b * b - 4 * a * c;
	if (d > 0)
	{
		cout << "The roots are real and distinct.";
	}
	else if (d == 0)
	{
		cout << "The roots are real and equal.";
	}
	else
	{
		cout << "The roots are complex.";
	}
	return 0;
}