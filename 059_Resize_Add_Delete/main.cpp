#include<iostream>
using namespace std;


/*
	изменить размер
	добавить элемент в массив
	удалить элемент массива
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
void push_back(int*& arr, int& size, int value)
{
	int* buffer = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		buffer[i] = arr[i];
	}
	buffer[size] = value;
	delete[]arr;
	arr = buffer;
	size++;
}
void pop_back(int*& arr, int& size)
{
	int* buffer = new int[size--];
	for (int i = 0; i < size; i++)
	{
		buffer[i] = arr[i];
	}
	delete[]arr;
	arr = buffer;

}
void main()
{
	int size = 5;
	int* arr = new int[size];
	FillArray(arr, size);

	ShowArray(arr, size);

	push_back(arr, size, 7);

	ShowArray(arr, size);
	pop_back(arr, size);
	ShowArray(arr, size);

	delete[]arr;

}