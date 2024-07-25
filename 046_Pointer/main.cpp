#include<iostream>
using namespace std;

//				Указатель

//* разыменование 
//& взятие адресса
void main()
{
	int a = 5;

	//int*px - создание указателя 
	int* px = &a;
	int* px2 = &a;
	//*px - разыменование доступ внутри ячейки
	cout << "px\t" << px << endl;
	cout << "*px\t" << *px << endl;
	cout << "px2\t" << px2 << endl;
	cout << "*px2\t" << *px2 << endl;
	cout << endl << endl;
	*px2 = 555;
	cout << "px\t" << px << endl;
	cout << "*px\t" << *px << endl;
	cout << "px2\t" << px2 << endl;
	cout << "*px2\t" << *px2 << endl;
	cout << "a\t" << a << endl;
}