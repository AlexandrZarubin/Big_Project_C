#include<iostream>
using namespace std;
/*
		int argc, char* argv[]
*/
//	argc-arguments count- количество аргументов
//	argv-arguments value- массив строк
void main(int argc, char* argv[])
{
	for (int i = 0; i < argc; i++)
	{
		cout << argv[i] << endl;
	}
	cout << "Hello wrold!";
	system("pause");
}