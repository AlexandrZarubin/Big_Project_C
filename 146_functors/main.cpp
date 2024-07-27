#include<iostream>

using namespace std;
/*

		ФУНКТОРЫ

*/

class myfunctor
{
	int count = 0;
public:
	int operator()(int a, int b)
	{
		cout << "я функтор " << endl;
		return a + b;
		//count++;
	}
};
class evenfunctor
{
	int evenSum = 0;
	int evenCount = 0;
public:
	void operator ()(int value)
	{
		if (value % 2 == 0)
		{
			evenSum += value;
			evenCount++;
		}
	}
	void ShowEvenSum()
	{
		cout << "сумма четных = " << evenSum << endl;
	}
	void ShowEvenCount()
	{
		cout << "количество четных чисел = " << evenCount << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "rus");
	//myfunctor f;
	//int result=f(5,3);
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	evenfunctor ef;
	for (auto var : arr)
	{
		ef(var);
	}
	ef.ShowEvenCount();
	ef.ShowEvenSum();
	return 0;
}