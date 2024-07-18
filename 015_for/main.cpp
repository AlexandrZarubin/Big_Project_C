#include<iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;
//#define FOR
//#define BREAK
//#define CONTINUE
#define lesson
void main()
{
	setlocale(LC_ALL, "rus");
#ifdef FOR
	int lenght = 10;
	for (int i = 0; i < lenght; i++)
	{
		cout << "variable i = " << i + 1 << endl;
	}
#endif // FOR


#ifdef BREAK
	int lenght = 10;
	while (true)
	{
		for (int i = 0; i < lenght; i++)
		{
			if (i == 5)
			{
				break;
			}
			cout << "variable i = " << i + 1 << endl;
		}
	}
#endif // BREAK

#ifdef CONTINUE
	int lenght = 10;
	for (int i = 0; i < lenght; i++)
	{
		if (i == 5)
		{
			continue;
		}
		cout << "variable i = " << i + 1 << endl;
	}

#endif // CONTINUE
#ifdef lesson
	cout << "---Программа подсчета кол-ва упражнений!---" << endl;
	//цикл с параметрами
			//I       II    IV
	for (int i = 0; i < 15; i++) //i+=2; //i*=10 //0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 выход 15
	{
		//III
		cout << "Мы присели " << i + 1 << " раз(а)!" << endl;
	}
	//первый вход в цикл I II III IV
	//на остальных шагах цикла II III IV
	//cout << i << endl; //счетчик, объявленный внутри цикла существует только внутри цикла

	cout << endl;
	int i = 0; //объявление счетичка до цикла
	for (i = 1; i <= 7; ++i) //1 2 3 4 5 6 7 выход 8
	{
		cout << "Мы подтянулись " << i << " раз(а)!" << endl;
	}
	cout << "Счетчик i= " << i << endl;
	cout << endl;
	int j = 0; //объявление счетчика до цикла
	for (; j < 13; j++) //0 1 2 3 4 5 6 7 8 9 10 11 12 выход 13
	{
		cout << "Мы сделали скручивание " << j + 1 << " раз(а)!" << endl;
	}
	cout << "Счетчик j= " << j << endl;
	cout << endl;
	//i=8; счетчик i на данный момент равен 8
	//аналог цикла while
	for (; i <= 15; ) //for(int i=8;i<=15;i++)
	{
		cout << "Мы подтянулись " << i << " раз(а)!" << endl;
		i++; //изменение счетчика в теле цикла
	}
	cout << "Счетчик i= " << i << endl;
	int k = 0;
	//бесконечный цикл
	for (;;)  //while(true){} //do{}while(true);
	{
		k++;
		cout << "Мы прыгнули на скакалке " << k << " раз(а)!" << endl;
		if (k == 25)break; //выход из бесконечного цикла
	}
	//бесконечный цикл for с объявлением счетчика до цикла и условием выхода в теле цикла
	//реализует логику цикла do{}while(k!=25);

	system("cls");

	double T = 100.0;
	//1 цикл с параметрами
	for (;;)  //аналог цикла do{}while(T<65);
	{
		cout << "Введите температуру процессора: ";
		cin >> T;
		if (T >= 65)break; //условие прерывания работы цикла
	}
	cout << "Перегрев процессора!" << endl;

	//2 цикл с постусловием
	/*do
	{
		cout<<"Введите температуру процессора: ";
		cin >> T;
	}while(T<65);
	cout<<"Перегрев процессора!"<<endl;*/

	//3 цикл с предусловием
	/*cout << "Введите температуру процессора: ";
	cin >> T;
	while (T < 65)
	{
		cout << "Введите температуру процессора: ";
		cin >> T;
	}
	cout << "Перегрев процессора!" << endl;*/
#endif // lesson


}