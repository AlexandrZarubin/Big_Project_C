#include<iostream>
using namespace std;
/*
		Двумерный динамический массив
*/
void main()
{
	int rows = 4;
	int cols = 5;

	/*cout << "enter rows count ";
	cin >> rows;
	cout << "enter cols count ";
	cin >> cols;*/

	//выделенеие 
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}

	//заполнение
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 20;
		}
	}

	//вывод
	//заполнение
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	//удаление
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[]arr;

}