#include<iostream>
using namespace std;


/*
	как скопировать динамические массив с++
*/
void FillArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void ShowArray(const int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

}
//template<typename T>T 
void main()
{
	int size = 10;

	int* firstArray = new int[size];
	int* secondArray = new int[size];

	FillArray(firstArray, size);
	FillArray(secondArray, size);

	cout << "firstArray =\t";
	ShowArray(firstArray, size);
	cout << "secondArray =\t";
	ShowArray(secondArray, size);
	cout << "=============================================================" << endl;
	delete[]firstArray;
	firstArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		firstArray[i] = secondArray[i];
	}
	//FillArray(firstArray, size);
	//FillArray(secondArray, size);

	cout << "firstArray =\t";
	ShowArray(firstArray, size);
	cout << "secondArray =\t";
	ShowArray(secondArray, size);
	cout << "=============================================================" << endl;
	delete[]firstArray;
	delete[]secondArray;


}