#include<iostream>

using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");

	//cout << sizeof(int) << endl;
	//cout << sizeof(int) << endl;

	//const int SIZE = 10;
	int arr[]{ 5,10,55,77 };
	cout << sizeof(arr) / sizeof(arr[0]) << endl << endl;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << endl;
	}

}