#include<iostream>
#include<string>
#include<fstream>
#include<windows.h>
using namespace std;

/*
		fstream ������\���������� ������
*/


int main()
{
	setlocale(LC_ALL, "rus");
	string path = "myfile.txt";

	fstream fs;
	fs.open(path, fstream::in | fstream::out | fstream::app);
	if (!fs.is_open())
	{
		cout << "������ �������� �����!" << endl;
	}
	else
	{
		string msg;
		int value;
		cout << "���� ������!" << endl;
		cout << "������� 1 ��� ������ ���������� � ����:" << endl;
		cout << "������� 2 ��� ���������� ���� ��������� �� �����:" << endl;
		cin >> value;

		if (value == 1)
		{
			cout << "������� ���� ���������!" << endl;
			SetConsoleCP(1251);
			cin >> msg;
			fs << msg << "\n";
			SetConsoleCP(866);
		}
		if (value == 2)
		{

			cout << "������ ������ �� �����!" << endl;
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