#include<iostream>
#include<string>
using namespace std;

/*
	Конструктор копирования
*/
class MyClass
{
	int size;
public:
	int* data;
	MyClass(int size)
	{
		this->size = size;
		this->data = new int[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}
		cout << "Constructor:\t" << this << endl;
	}
	MyClass(const MyClass& other)
	{
		this->size = other.size;
		this->data = new int[other.size];
		for (int i = 0; i < other.size; i++)
		{
			this->data[i] = other.data[i];
		}
		cout << "Copy_Constructor:\t" << this << endl;
	}
	~MyClass()
	{
		cout << "Destructor:\t" << this << endl;
		delete[]data;
	}
};
void Foo(MyClass value)
{
	cout << "Function called Foo" << endl;
}
MyClass Foo2()
{
	cout << "Function called Foo2" << endl;
	MyClass temp(2);
	return temp;
}
int main()
{
	//Foo2();

	MyClass a(1);
	//Foo(a);
	MyClass b(a);

	return 0;
}
