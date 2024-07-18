#include<iostream>
using namespace std;

//#define Work1
//#define Work2
//#define Dz
//#define lesson
//#define ladder // Discount
#define Transport
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
#endif // lesson
#ifdef ladder
	cout << "---Программа для расчета скидок!---" << endl;
	double summa = 0.0; //сумма покупок
	cout << "Введите сумму: "; cin >> summa;
	if (summa <= 0)
	{
		cout << "Некорректная сумма!" << endl;
	}
	else //работает, когда сумма больше нуля!
	{
		if (summa < 1000) //0...1000
		{
			cout << "Ваша скидка равна 0%, до скидки 5% не хватает "
				<< 1000 - summa << " руб. К оплате: " << summa << " руб." << endl;
		}
		else //работает, когда summa>=1000
		{
			if (summa < 2000) //1000...2000
			{
				cout << "Ваша скидка равна 5%, до скидки 10% не хватает "
					<< 2000 - summa << " руб. К оплате: " << summa * 0.95 << " руб." << endl;
			}
			else //работает, когда summa>=2000
			{
				if (summa < 3000) //2000...3000
				{
					cout << "Ваша скидка равна 10%, до скидки 15% не хватает "
						<< 3000 - summa << " руб. К оплате: " << summa * 0.90 << " руб." << endl;
				}
				else //работает, когда summa>=3000
				{
					if (summa < 4000) //3000...4000
					{
						cout << "Ваша скидка равна 15%, до скидки 20% не хватает "
							<< 4000 - summa << " руб. К оплате: " << summa * 0.85 << " руб." << endl;
					}
					else //работает, когда summa>=4000
					{
						if (summa < 5000) //4000...5000
						{
							cout << "Ваша скидка равна 20%, до скидки 25% не хватает "
								<< 5000 - summa << " руб. К оплате: " << summa * 0.80 << " руб." << endl;
						}
						else //работает, когда summa>=5000
						{
							cout << "Ваша скидка равна 25%, это максимальная скидка! К оплате: "
								<< summa * 0.75 << " руб." << endl;
						}
					}
				}
			}
		}
	}
	system("pause");
#endif // ladder
#ifdef Transport
	cout << "---Программа определения способа передвижения!---" << endl;
	int Cash = 0, Bus = 25, Metro = 50, Taxi = 150, Car = 500;
	cout << "Введите сумму имеющихся денежных средств: ";
	cin >> Cash;
	if (Cash < 0)
	{
		cout << "Введина некорректная сумма!" << endl;
		system("pause");//добавит запрос нажатия любой клавиши
		exit(-1);//завершение все программы
	}
	//дальнейшие деиствия только в том случае, если Cash>=0;
	if (Cash < Bus)
	{
		cout << "Придется пойти пешком!" << endl;

	}
	else// иначе есть деньги на какойто транспорт Cash>=25
	{
		cout << "можем использовать траспорт: " << endl;
		cout << "можем поехать на автобусе!" << endl;
	}
	if (Cash >= Metro)
	{
		cout << "Можем поехать на метро!" << endl;
	}
	if (Cash >= Taxi)
	{
		cout << "Можем поехать на такси!" << endl;
	}
	if (Cash >= Car)
	{
		cout << "Можем поехать на машине! Не забудь ключи и документы!" << endl;
	}
	else// если не можем заправить машину
	{
		cout << "ключи и документы на машине не берем!" << endl;
	}
	system("pause");
#endif // Transport


}
