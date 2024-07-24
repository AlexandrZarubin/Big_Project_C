
//					Область видимости

#include<iostream>

using namespace std;
int c;
void main()
{
	setlocale(LC_ALL, "rus");
	c++;
	cout << c << endl;
	int a = 5;
	{
		c++;
		cout << c << endl;
		int a = 5;
		int b = 3;
	}
	c++;
	cout << c << endl;
	//b = 3;
}