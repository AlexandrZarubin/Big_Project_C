#include<iostream>

using namespace std;


// inline

inline int Sum(int a, int b);


void main()
{
	setlocale(LC_ALL, "rus");
	cout << Sum(5, 5);

}

int Sum(int a, int b)
{
	return a + b;
}