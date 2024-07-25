#include<iostream>

using namespace std;

/*
	Препроцессор
	#define
	макрос функций
*/
#define FOO(x,y)((x)*(y))
void main()
{
	cout << FOO(5, 6) << endl;
}