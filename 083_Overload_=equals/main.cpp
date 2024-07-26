#include<iostream>
using namespace std;
/*
	перегрузка оператора присваивания
*/
class MyClass
{
	int size;
public:
	int* data;
	// Costructors:
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
	//				Operators
	MyClass& operator = (const MyClass& other)
	{
		cout << "operator = :\t" << this << endl;
		if (this->data != nullptr)
		{
			delete[]this->data;
		}
		this->size = other.size;
		this->data = new int[other.size];
		for (int i = 0; i < other.size; i++)
		{
			this->data[i] = other.data[i];
		}
		return *this;
	}

	//Methodes

};
int main(int argc, char* argv[])
{

	MyClass a(5);
	MyClass b(2);
	MyClass c(5);
	a = b = c;
	return 0;
}