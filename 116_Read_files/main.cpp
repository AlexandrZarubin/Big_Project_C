#include<iostream>
#include<windows.h>
#include<string>
#include<fstream>
using namespace std;

/*
	Чтение данных из фаила
*/

int main()
{
	//setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string path = "myFile.txt";

	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
	{
		cout << "Ошибка открытия фаила!" << endl;
	}
	else
	{
		//строчкой
		cout << "Фаил открыт!" << endl;
		string str;
		//char str[50];
		while (!fin.eof())//пока не настанец конец фаила
		{
			//str = "";
			//fin >> str;
			getline(fin, str);
			//fin.getline(str, 50);
			cout << str << endl;
		}

		//посимвольно
		/*cout << "Фаил открыт!" << endl;
		char ch;
		while (fin.get(ch))пока не кончаться сиволы
		{
			cout << ch;
		}
		*/
	}
	fin.close();

	return 0;
}