#include<iostream>
#include<string>
using namespace std;

/*
	перегрузка оператора индексирования []
*/
class TestClass
{
private:
	int arr[5]{ 5,44,4,987,69 };
public:
	int& operator[](int index)
	{
		return arr[index];
	}
};
int main(int argc, char argv[])
{
	TestClass a;
	//cout << a[1];
	a[0] = 100;
	cout << a[0];

	return 0;
}