#include<iostream>
using namespace std;

/*
	Условная компиляция
*/
#define DEBUG 5
void main()
{
	setlocale(LC_ALL, "rus");
#ifdef DEBUG
	cout << "Начало цикла" << endl;
#endif // DEBUG

	for (int i = 0; i < 4; i++)
	{
		cout << i << endl;
	}

#ifdef DEBUG
	cout << "дебаг определен" << endl;
#else
	cout << "дебаг не определен" << endl;
#endif // DEBUG

	//#ifndef DEBUG

#if DEBUG>4
	cout << "дебаг определен" << endl;
#elif DEBUG==5
	cout << "дебаг не определен" << endl;
#endif // !1

}