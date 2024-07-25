#include<iostream>
using namespace std;

/*
		Строки и указатели в  c++
*/
void Foo(char* str)
{
	cout << strlen(str) << endl;
}
#define dz
int Strlen(const char* const  str)
{
	int counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return counter;
}
void main()
{
	//setlocale(LC_ALL, "rus");
	char str[] = "Hello!";
	const char* string1 = "str";
	cout << string1 << endl;

	const char* strArr[]{ "hello","world","test" };
	for (int i = 0; i < 3; i++)
	{
		cout << strArr[i] << endl;
	}


	const char* str1 = "Hello";
	Foo(str);

#ifdef dz
	const char* str = "Hello";
	char arrSymbol1[]{ 'H','e','l','l','o','\0' };
	cout << Strlen(str) << endl;
	cout << Strlen(arrSymbol1) << endl;
#endif // dz


}