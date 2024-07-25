#include<iostream>
using namespace std;

/*
	Тернарный оператор
*/

void main()
{
	setlocale(LC_ALL, "rus");
	int a = 5;
	a++;// унарный один операнд
	a += 5;//бинарный два операнда
	a = 10;

	//cin >> a;
	if (a < 10)
	{
		cout << "а меньше 10 " << endl;
	}
	else if (a > 10)
	{
		cout << "а больше 10 " << endl;
	}
	else
	{
		cout << "равна 10 " << endl;
	}
	//if()									else if										else
	(a < 10) ? (cout << "а меньше 10 " << endl) : (a > 10) ? (cout << "а больше 10 " << endl) : (cout << "равна 10 " << endl);



}