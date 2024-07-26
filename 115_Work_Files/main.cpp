#include<iostream>
#include<string>
#include<fstream>

using namespace std;
/*
	Сохранение данных в фаил
	//fstream
	//ifstream
	//ofstream
*/
int main()
{
	setlocale(LC_ALL, "rus");
	string path = "myFile.txt";
	//cin >> path;
	ofstream fout;
	fout.open(path, ofstream::app);

	if (!fout.is_open())
	{
		cout << "Ошибка открытия фаила!" << endl;
	}
	else
	{
		//fout << "Это наши данные!";
		for (int i = 0; i < 5; i++)
		{
			cout << "Введите число!" << endl;
			int a;
			cin >> a;
			fout << a << endl;
		}

		//fout << "Привет"<<endl;
	}
	fout.close();
	return 0;
}