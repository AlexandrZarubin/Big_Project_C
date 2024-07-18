#include<iostream>
using namespace std;

//#define Work1
//#define Work2
//#define Dz
#define lesson
void main()
{
	setlocale(LC_ALL, "rus");

	/*
	if(утверждение или выражение)
	{
	деиствеие 1
	}
	esle
	{
	деисвтие 2
	}
	*/

	//bool isRain = true;
#ifdef Work
	bool isRain = false;
	if (isRain)
	{
		cout << "Идет дождь, нам нужен зонт " << endl;
	}
	else
	{
		cout << "Дождя нет, зонт не нужен " << endl;
	}
#endif // Work


#ifdef Work2

	int a;
	cout << "Ведите число " << endl;
	cin >> a;
	if (a > 5)
	{
		cout << "Ваше число больше 5-ти " << endl;
	}
	else if (a == 5)
	{
		cout << "Ваше число равно 5-ти" << endl;
	}
	else
	{
		cout << "Ваше число меньше 5-ти" << endl;
	}

#endif // Work2


#ifdef Dz
	int a;
	cout << "Введите число для проверки на четность "; cin >> a;
	if (a % 2)
	{
		cout << "Число не четное " << a << endl;

	}
	else
	{

		cout << "Число четное " << a << endl;
	}
#endif // Dz

#ifdef lesson
	int A = 1, B = 10, X = 0;
	cout << "Введите значение переменной Х: "; cin >> X;
	//A<X<B A<X и X<B
	//if (A < X < B) // A<X(0/1) (0/1)<B = true
	//if((A<X)&&(X<B)) //Если А меньше Х и Х меньше В (от 2 до 9 вкдючительно) 
	if (A < X && X < B) // каждое условие можно в скобки не помещать
		cout << "Х находится в диапозоне от А до В!" << endl;
	else
		cout << "ОШИБКА! Х выходи за границы диапозона!!!" << endl;
#endif // DEBUG


}
