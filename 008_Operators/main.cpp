﻿#include<iostream>
#include<locale.h>
#include<stdlib.h>
using namespace std;


//#define UNARNIAU
//#define BINARNII
//#define DZ //Введите три числа и выведите на экран значение суммы, произведение и средние арифметичское этих чисел

int main()
{
	setlocale(LC_ALL, "rus");
	//унарный
#ifdef UNARNIAU
	int a = 5;
	a = -a;
	cout << a << endl;
#endif // 

	//бинарный 
#ifdef BINARNII
	int a = 5, b = 2;
	cout << a * b << endl;
#endif // BINARNII

#ifdef DZ
	int a, b, c;
	cout << "Введите три числа: ";
	cin >> a >> b >> c;
	cout << endl;
	cout << "Сумма " << a + b + c << endl;
	cout << "Произведение " << a * b * c << endl;
	cout << "Средние арефметик " << (double)(a + b + c) / 3 << endl;
#endif // DZ


    int A = 5, B = 3;
    //---( + - * / % )--- арифметические операторы
    /*A = (B + 1) / 5;
    A - B;
    -(-3);
    cout << "b=" << -B << endl;*/

    A = A + 10;//5+10 A=15
    cout << "Перменная А: " << A << endl;

    A++;// Аналагично A=A+1; -постфиксная форма Оператор инкримент
    cout << "Перменная А: " << A << endl;

    A--;// Аналагично A=A-1; -постфиксная форма Оператор декремент
    cout << "Перменная А: " << A << endl;

    ++A; //преиксная форма оператор инкримент
    cout << "Перменная А: " << A << endl;

    --A; //преиксная форма оператор декремент
    cout << "Перменная А: " << A << endl;
    system("cls");//очистка экрана консоли
    A = 10; // Оператор присваивания
    //cout << "Переменная А++: " << A++ << endl;//постфиксная форма,на экране 10 в перемменой 11
    //cout << "Перменная А: " << A << endl;

    //cout << "Переменная ++А: " << ++A << endl;//префиксная форма,на экране 11 в перемменой 11
    //cout << "Перменная А: " << A << endl;
    //А=10
    B = A++;//Постфиксная форма оператор инкримент- сначала текущее значение переменой А
    // будет примвоено в переменную B, потом значение А будет увеличено на 1
    cout << "Перменная А: " << A << endl;
    cout << "Перменная B: " << B << endl;

    A = 10;
    B = ++A;//префиксная форма оператор инкремент - сначала значение переменой А будет увеличено на 1,
    //потом новое значение А будет присвоенно переменой
    cout << "Перменная А: " << A << endl;
    cout << "Перменная B: " << B << endl;
    system("cls");

    cout << "a%3=" << A % 3 << endl;
    cout << "a%20=" << A % 20 << endl;

    cout << B % 2 << endl;//остаток от деления на 2
    A += 10;//аналагично А=А+10
    cout << "Перменная А: " << A << endl;

    A -= 10;//аналагично А=А-10
    cout << "Перменная А: " << A << endl;

    A *= B;//аналогично А=А*B;
    cout << "Перменная А: " << A << endl;

    A /= B;//аналогично А=А/B;
    cout << "Перменная А: " << A << endl;

    A %= 3;//аналогично А=А%3;//A11%3;A=2
    cout << "Перменная А: " << A << endl;
	return 0;
}