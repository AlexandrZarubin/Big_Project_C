#include<iostream>
using namespace std;

//union
union MyUnion
{
	short int a;
	int b;
	float c;
};

int main()
{
	setlocale(LC_ALL, "rus");
	MyUnion u;
	u.a = 5;
	cout << "short int: " << u.a << endl;
	u.b = 40000;
	cout << " int: " << u.b << endl;
	u.c = 5.005;
	cout << " float: " << u.c << endl;
	cout << "short int: " << u.a << " int: " << u.b << " float: " << u.c;
	return 0;
}