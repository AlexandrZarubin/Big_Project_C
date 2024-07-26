#include<iostream>
#include<string>
#include<fstream>
#include<windows.h>
using namespace std;

/*
		fstream чтение\сохранение данных
*/


int main()
{
	setlocale(LC_ALL, "rus");
	string path = "myfile.txt";

	fstream fs;
	fs.open(path, fstream::in | fstream::out | fstream::app);
	if (!fs.is_open())
	{
		cout << "Ошибка открытия фаила!" << endl;
	}
	else
	{
		string msg;
		int value;
		cout << "Фаил открыт!" << endl;
		cout << "Введите 1 для записи собобщения в фаил:" << endl;
		cout << "Введите 2 для считывания всех сообщений из фаила:" << endl;
		cin >> value;

		if (value == 1)
		{
			cout << "Введите ваше сообщение!" << endl;
			SetConsoleCP(1251);
			cin >> msg;
			fs << msg << "\n";
			SetConsoleCP(866);
		}
		if (value == 2)
		{

			cout << "Чтение данных из фаила!" << endl;
			while (!fs.eof())
			{
				msg = "";
				fs >> msg;
				cout << msg << endl;
			}
		}

	}
	fs.close();
	return 0;

}