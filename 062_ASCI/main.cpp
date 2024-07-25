#include<iostream>

using namespace std;
/*
	Таиблица символов ASCII
*/
void main()
{
	setlocale(LC_ALL, "rus");
	cout << sizeof(char) << endl;
	cout << "TABL" << endl;
	for (int i = 0; i <= 255; i++)
	{
		cout << "code = " << i << " " << "char = " << (char)i << endl;
	}


}