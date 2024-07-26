#include<iostream>
#include<string>
#include<fstream>
using namespace std;
/*
	обработка исключений try catch
*/

int main()
{
	setlocale(LC_ALL, "rus");
	string path = "myFile.txt";
	ifstream fin;
	fin.exceptions(ifstream::badbit | ifstream::failbit);

	/*
	* fin.open(path);
	if (!fin.is_open())
	{
		cout << "Ошибка открытия фаила!" << endl;
	}
	else
	{
		cout << "файл открыт!" << endl;
	}*/
	try
	{
		cout << "Попытка открытия фаила!" << endl;
		fin.open(path);
		cout << "фаил успешно открыт!" << endl;
	}
	//catch (const std::exception&ex)
	catch (const ifstream::failure& ex)
	{
		cout << ex.what() << endl;
		cout << ex.code() << endl;
		cout << "Ошибка открытия фаЙла! " << endl;
	}
	//fin.close();
	return 0;
}