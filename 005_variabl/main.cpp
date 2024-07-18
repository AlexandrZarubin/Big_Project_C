#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int a = 5, Age, b;
	//a = 5;
	Age = 10;
	b = 7;
	cout << a << " " << Age << " " << b << " " << endl;

    // обьявление перемменой
    int A; //обЪявление переменной типа данных int,  для хранения целого числа
    int B = 0;//объявление переменой и ее инициализация значения 0
    cout << B << endl; // вывод значения перменой B на экран
    A = 10;
    B = -17;
    cout << A << endl;     // вывод значения A на экран консоли
    cout << B << endl;
    //double A; //нельзя создать перменую с уже использованным названием
    double A1 = 3.5;
    //double 1A = 4.5;     //так нельзя
    //CamelStyle
    int AgeofMan = 35;     // переменая хранит вораст мужщины
    //snake_style
    int age_of_woman = 31; // переменая хранит вораст женщины

    // отчистка экрана консоли
    system("cls");         //system("clear") для линукс 
    cout << "возраст мужщины:" << AgeofMan << endl;
    cout << "возраст женщины:" << age_of_woman << endl;
    const int Count_Days_Of_week = 7;// константы обязательно нужно инициалировать нужным значением 
    //Count_Days_Of_week = 10; //изменить значения коснтанты нельзя
    const float PI = 3.14; //3.14e0
    double weight_atom = 2.5194e-17;//экспоненциальная форма представления числа
    cout << "Вес атома:" << weight_atom << endl;
    0.000000000000000025194;
    35.7;
    3.57e1;// аналачично 3.57е+1

    //символьный тип данных
    char Symbol1 = 't'; // символ указывается в опострофах и по одному
    char Symbol2 = 'О';
    const char Symbol3 = 'p';
    cout << Symbol1 << "  " << Symbol2 << ' ' << Symbol3 << endl;//вывод Т О Р через пробелы
	return 0;
}