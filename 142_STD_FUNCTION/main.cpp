#include<iostream>
#include<functional>
#include<vector>
using namespace std;

//		std::function

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
int Sum(int a, int b)
{
	return a + b;
}
void DoWork(vector<int>& vc, vector<function<void(int)>>funcVector)
{
	for (auto el : vc)
	{
		//Bar(el);
		//f(el);
		for (auto& fel : funcVector)
		{
			fel(el);
		}
	}
}
int main()
{
	setlocale(LC_ALL, "rus");
	/*function<void()>f;
	f = Foo;
	f();
	f = Bar;
	f();
	function<int(int, int)>i;
	i = Sum;
	cout<<i(5, 6)<<endl;*/
	vector<int>vc = { 1,51,4,10,44,98,8,12,22,29,49 };
	//DoWork(vc,Foo);
	//DoWork(vc,Bar);
	vector<function<void(int)>>fVector;
	fVector.emplace_back(Foo);
	fVector.emplace_back(Bar);
	DoWork(vc, fVector);


	return 0;
}