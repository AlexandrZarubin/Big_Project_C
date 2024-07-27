#include<iostream>
#include<string>
using namespace std;

/*
*	smart pointers
*/
template<typename T>
class SmartPointer
{
	T* ptr;

public:
	SmartPointer(T* ptr)
	{
		this->ptr = ptr;
		cout << "Contructor" << endl;
	}
	~SmartPointer()
	{
		delete ptr;
		cout << "~Desructor" << endl;
	}
	T& operator*()
	{
		return *ptr;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	/*int* ptr = new int(5);
	cout << *ptr << endl;
	delete ptr;*/

	SmartPointer<int>pointer = new int(5);
	cout << *pointer << endl;
	*pointer = 1515151511;
	cout << *pointer << endl;


	return 0;
}