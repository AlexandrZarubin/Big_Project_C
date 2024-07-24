#include<iostream>

using namespace std;

void FillArray(int arr[], const int size)
{
	int a = sizeof(arr);
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}
void Print(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
}

void main()
{
	setlocale(LC_ALL, "rus");
	const int SIZE = 10;
	int arr[SIZE]{};
	int a = sizeof(arr);
	FillArray(arr, SIZE);
	Print(arr, SIZE);

}