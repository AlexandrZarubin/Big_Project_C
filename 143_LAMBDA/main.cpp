#include<iostream>
#include<functional>
#include<vector>
using namespace std;

//		Лямбда-функций

void Foo(int a)
{
	if (a > 10 && a < 40)
	{
		cout << "Foo() " << a << endl;
	}
}
void Bar(int a)
{
	if (a % 2 == 0)
	{
		cout << "Bar() " << a << endl;
	}
}
void Baz(int a)
{
	cout << "Bazzz" << endl;
}
int Sum(int a, int b)
{
	return a + b;
}
void DoWork(vector<int>& vc, function<void(int)>func)
{
	for (auto el : vc)
	{
		//Bar(el);
		//f(el);
		func(el);
	}
}
int main()
{
	setlocale(LC_ALL, "rus");
	//[]() {};
	vector<int>vc = { 1,51,4,10,44,98,8,12,22,29,49 };

	/*[](int a)
	{
		cout << "вызвана анонимная функция с параметрами - " << a << endl;
	}*/
	//int p=0;

	/*auto f=[&p]()
	{
		p = 5;
	};
	f();*/
	auto f = []()
	{
		return 1;
	};
	auto q = f();
	//DoWork(vc, [](int a)
	//	{
	//		//cout << "вызвана анонимная функция с параметрами - " << a << endl;
	//		if (a % 2 == 0)
	//		{
	//			cout << "лямбда: " << a << endl;
	//		}
	//	});
	return 0;
}