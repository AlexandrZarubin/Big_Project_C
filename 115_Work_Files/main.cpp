#include<iostream>
#include<string>
#include<fstream>

using namespace std;
/*
	���������� ������ � ����
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
		cout << "������ �������� �����!" << endl;
	}
	else
	{
		//fout << "��� ���� ������!";
		for (int i = 0; i < 5; i++)
		{
			cout << "������� �����!" << endl;
			int a;
			cin >> a;
			fout << a << endl;
		}

		//fout << "������"<<endl;
	}
	fout.close();
	return 0;
}