#include<iostream>
#include<string>
using namespace std;

/*
*	smart pointers
*	auto_ptr
*	unique_ptr
*	shared_ptr
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
	//auto_ptr<int>ap1(new int(5));
	//unique_ptr<int>ap1(new int(5));
	//shared_ptr<int>p1(new int(5));

	//SmartPointer<int>sp1 = new int(5);
	//SmartPointer<int>sp2 = sp1;
	return 0;
}