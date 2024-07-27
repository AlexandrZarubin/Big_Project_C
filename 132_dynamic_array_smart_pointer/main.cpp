#include<iostream>
#include<string>
#include<memory>
using namespace std;

/*
	smatr poiner
	умные указатели ина массив
*/

int main()
{
	setlocale(LC_ALL, "rus");
	int size = 5;

	//int* arr = new int[size] {1,6,44,9,8};
	//shared_ptr<int[]>ptr(arr);

	shared_ptr<int[]>ptr(new int[size] {1, 6, 44, 9, 8});
	for (int i = 0; i < size; i++)
	{
		ptr[i] = rand() % 10;
		cout << ptr[i] << endl;
	}
	return 0;
}