#include<iostream>
#include<string>
using namespace std;

/*
	namespace
	пространство имен
*/
namespace firstNS
{
	void Foo()
	{
		cout << "Foo firstNS" << endl;
	}
}


namespace secondNS
{
	void Foo()
	{
		cout << "secondNS Foo" << endl;
	}
}
namespace thidNS
{
	namespace secondNS
	{
		void Foo()
		{
			cout << "thidNS::secondNS::Foo2" << endl;
		}
	}
}
using namespace secondNS;

int main()
{
	setlocale(LC_ALL, "rus");
	firstNS::Foo();
	thidNS::secondNS::Foo();

	return 0;
}