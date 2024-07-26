#include<iostream>
#include<string>
using namespace std;
/*
	деструктор
*/

class MyClass
{
	int* data;
public:
	MyClass(int size)
	{
		data = new int[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}
		cout << "Object " << data << " Constructor" << endl;
	}
	~MyClass()
	{
		delete[]data;
		cout << "Object " << data << " Destructor" << endl;
	}
};
void Foo()
{
	cout << "Foo strart to execution" << endl;
	MyClass a(1);
	cout << "Foo end to execution" << endl;

}
int main(int argc, char* argv[])
{
	/*MyClass a(1);
	MyClass b(2);
	MyClass	c(3);*/
	Foo();
	return 0;
}