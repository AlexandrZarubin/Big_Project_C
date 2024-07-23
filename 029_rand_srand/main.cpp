#include<iostream>
#include<time.h>
using namespace std;
//#define WORK
//#define DZ1
#define DZ2
void main()
{
	setlocale(LC_ALL, "rus");
	//rand()%(a-b)+b    ;b...a-1
		//rand()%(59-46)+46 ;46..58 включительно
		//rand()%(-64-(-98))+(-98) или rand() % (-64 - (-98))-98  ;-98...-65
		//rand()%(19-(-15))-15              ; -15...18
	//Numbers[i] = rand() % (100 - (-99)) - 99; //от -99 до 99 включительно
	//rand()%(A-B)+B - формула генератора случайных чисел с B до A(B...A-1)
	//включая В, но невключая А

	srand(time(NULL));
#ifdef WORK
	int const SIZE = 10;
	int arr[SIZE]{};
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % (100 - 0) + 0;
	}for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
#endif // WORK

#ifdef DZ
	int const SIZE = 10;
	int arr[SIZE]{};
	bool flag = true;
	for (int i = 0; i < SIZE;)
	{
		flag = true;
		int Number = rand() % (20 - 0) + 0;
		for (int j = 0; j < i; j++)
		{
			if (Number == arr[j]) { flag = false;  break; }
		}
		if (flag) { arr[i] = Number;  i++; }

	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
#endif // DZ


#ifdef DZ2
	int const SIZE = 10;
	int arr[SIZE]{};
	bool flag = true;
	for (int i = 0; i < SIZE;)
	{
		flag = true;
		int Number = rand() % (20 - 0) + 0;
		for (int j = 0; j < i; j++)
		{
			if (Number == arr[j]) { flag = false;  break; }
		}
		if (flag) { arr[i] = Number;  i++; }

	}


	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	int Min = arr[0];
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		if (Min > arr[i])Min = arr[i];
	}
	cout << Min << endl;
#endif // DZ2


}