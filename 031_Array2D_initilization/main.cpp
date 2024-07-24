#include<iostream>
#include<ctime>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	const int ROW = 3;
	const int COL = 4;

	//int arr[ROW][COL]{ {2,4,66,1},{433,3,6,1} };
	int arr[ROW][COL]{};

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}


}