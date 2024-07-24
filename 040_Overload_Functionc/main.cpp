#include<iostream>

using namespace std;

int Sum(int a, int b, int c)
{
	a++;
	return a + b + c;
}
int Sum(int a, int b)
{
	return a + b;
}

double Sum(double a, double b)
{
	return a + b;
}
void main()
{
	cout << Sum(1, 2, 3) << endl;
	cout << Sum(1, 2) << endl;
	cout << Sum(1.5, 2.2) << endl;
}