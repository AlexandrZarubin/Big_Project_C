#include<iostream>
using namespace std;
/*
		Работа с динамической памятью. NULL и nullptr
*/
void main()
{
	setlocale(LC_ALL, "rus");

	int* pa = new int;
	*pa = 10;
	cout << *pa << endl;
	delete pa;
	//pa = NULL;
	//if (pa != NULL)
	pa = nullptr;
	if (pa != nullptr)//if(pa)
	{
		cout << "address\t" << pa << endl;
		cout << pa << endl;
		cout << "value\t" << *pa << endl;
	}

}