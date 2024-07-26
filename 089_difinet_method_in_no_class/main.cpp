#include<iostream>
#include<string>
using namespace std;

/*
	как вынести реализацию метода из класса
*/
class MyClass
{
public:
	MyClass();
	~MyClass();
	void PrintMessage();

private:

};



int main(int argc, char* argv[])
{
	MyClass a;
	a.PrintMessage();
	/*for (int i = 0; i < argc; i++)
	{
		cout << argv[i];
	}*/
	return 0;
}
MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}
void MyClass::PrintMessage()
{
	cout << "Hello" << endl;
}