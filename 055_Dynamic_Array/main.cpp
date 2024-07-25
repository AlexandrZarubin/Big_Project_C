#include<iostream>
using namespace std;

/*
		динамический массив
*/
void main()
{
	setlocale(LC_ALL, "rus");
	int SIZE = 0;
	//cin >> SIZE;
	SIZE = 5;
	int* arr = new int[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << "i=" << i + 1 << "\t" << arr[i] << "\t" << arr + i << endl;
	}
	delete[]arr;
	arr = nullptr;

}