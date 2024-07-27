#include<iostream>
#include<vector>
#include<list>
using namespace std;

/*
	цикл for each
	range-based циклы
*/
template<typename T>void PrintList(const list<T>& lst)
{
	for (auto i = lst.cbegin(); i != lst.cend(); ++i)
	{
		cout << *i << endl;
	}
	cout << "--------------------------------------------\n\n";
}
int main()
{
	setlocale(LC_ALL, "rus");
	//int arr[] = { 5,11,94,99,44 };

	//for (const auto var : arr)
	//for (const auto& var : arr)
	//{
	//	//var = -1;
	//	cout << var << endl;
	//}

	list<int>myList = { 1,2,3,4,5,6,7,8,9,0 };
	for (const auto& var : myList)
	{
		cout << var << endl;
	}
	cout << "--------------------------------\n";

	return 0;

}