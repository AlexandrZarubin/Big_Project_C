#include<iostream>
#include<string>
using namespace std;
/*
	Что такое конкатенация строк
*/

void main()
{
	char result[255]{};
	char str1[255] = "Hello";
	char str2[255] = "world";
	//cout << str1 << endl;
	strcat_s(result, str1);
	strcat_s(result, str2);
	cout << result << endl;
	cout << "====================================================" << endl;
	string stri1 = "Hello";
	string stri2 = "world";
	string stri3 = "!!!";
	string result1;
	result1 = stri1 + " " + stri2 + " " + stri3;
	cout << result1 << endl;
	setlocale(LC_ALL, "rus");
	string name = "Мартин";
	string familay = "Дугин";
	string otchestvo = "Игоревич";
	result1 = "Фамилия: " + familay + "\tИмя: " + name + "\tОтчество: " + otchestvo;
	cout << result1 << endl;

}