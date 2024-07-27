#include<iostream>
#include<string>
using namespace std;

/*
	Струтктуры,struct
*/
class MyClass
{
public:
	int a = 10;

};
class MyClass2 :public MyClass
{

};
struct MyStruct
{
	int a = 22;
};
struct MyStruct2 :MyStruct
{

};
int main()
{
	setlocale(LC_ALL, "rus");
	MyClass m;
	MyStruct ms;
	MyClass2 m2;
	MyStruct2 ms2;

	return 0;
}