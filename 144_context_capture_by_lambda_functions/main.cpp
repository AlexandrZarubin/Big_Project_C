#include<iostream>
using namespace std;


/*
	Лямда-функция
	захват переменых в контекст
*/
class MyClass
{
public:
	int a = 11;
	void msg() { cout << "msg" << endl; }
	void Lambda()
	{
		auto f = [this]()
		{
			this->msg();
		};
		f();
	}
};
int main()
{
	setlocale(LC_ALL, "rus");
	/*
	int a = 55;
	int b = 10;
	//auto f = [&a,b]()
	//auto f = [=]()
	auto f = [&a,b]()mutable
	{
		a = 11;
		b = 12;
		cout << a<<"\t" << b << endl;
		return 0;
	};

	 f();
	 cout << a<<"\t" << b << endl;
	 */

	MyClass m;
	m.Lambda();
	auto f = []()->float
	{
		return 1.555f;
	};
	auto result = f();
	return 0;
}