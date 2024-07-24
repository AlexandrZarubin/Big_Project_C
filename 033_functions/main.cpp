#include<iostream>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
//#define LESSON
#define WORKLESSON
using namespace std;
/*	Функция	*/

void foo()
{
	cout << "я функция, меня вызвали!" << endl;
	return;
}
int foo(int a)
{
	//a++;
	//cout << a << endl;
	return ++a;
}
int Sum(int a, int b)
{
	//int result;
	//result = a + b;
	//return result;
	return a + b;
}
int Sum(double a, double b, double c)
{
	return a + b + c;
}


//////////////////////////////////////////////////

//объявление функции и её реализация
void Hello() //заголовок функции, которая не принемает параметры и не возвращает результат
{
	//тело функции
	cout << "Привет, Мир!" << endl;
}
//функция принемает кол-во звездочек в качестве параметра
//и выводит на экран указанное кол-во звездочек
void Stars(int Count) //заголовок функции, которая принемает 1 параметр типа данных int, но не возвращает результат
{
	//int Count=15;
	for (int i = 0; i < Count; i++)
	{
		cout << "*";
	}
	cout << endl;
}
//функция вывода на экран заданных символов в заданром кол-ве
void Line(char Symbol, int Count) //заголовок функции, которая принемает 2 параметра, но не возвращает результат
//void Line(int Count, char Symbol ) //это другая функциия
{
	if (Count <= 0)
	{
		cout << "Кол-во символов должно быть больше нуля!" << endl;
		return; //прерываение работы функции
	}
	for (int i = 0; i < Count; i++)
	{
		cout << Symbol;
	}
	cout << endl;
}
//функция возведения целого числа в целую степень
int MyPow(int Digit, int Pow) //заголовок функции, которая принемает 2 параметра и возвращает результат типа данных int
{
	if (Pow <= 0)
	{
		cout << "Степень должна быть больше нуля!" << endl;
		return 0; //прерывание работы функции, но нужно вернуть результат
	}
	int Result = 1; //промежуточный и конечный результат
	for (int i = 0; i < Pow; i++)
	{
		Result *= Digit; //Result = Result * Digit;
	}
	return Result; //return возвращает значение - результат работы функции
	cout << "Ура!!!" << endl; //эта команда выполнена не будет! Так как return прерываетработу функции
}
//прототип функции меняющей значения двух переменных местами
//void Change(int A, int B);
void Change(int, int); //в прототипе можно не указывать имена параметров, но типы данных обязательно

//функция считает кол-во четных элементов массива, передается имя массива и его размер
int CountEvenElements(int Array[], int Size)
{
	int Count = 0; //кол-во четных элементов
	for (int i = 0; i < Size; i++)
	{
		if (Array[i] % 2 == 0)
		{
			Count++;
			cout << Array[i] << " ";
		}
	}
	cout << endl;
	return Count; //возвращаем кол-во четных элементов
}

//прототип функции заменяющей отрицательрные элементы массива
//int ChangeNegativeElements(int Array[], int Size);
int ChangeNegativeElements(int[], int); //прототип без указания имен аргументов

//глобальные константы, для задания размеров массива
const int row = 3;
const int col = 4;

//функция подсчета суммы всех элементов двумерного массива
//int SummaAllElements(int Array[][4], int row, int col) //обязательно нужно указать кол-во элементов в каждой строке,
//int SummaAllElements(int Array[][4]) //используя глобальные константы, можно размеры не передавать в качестве аргументов
//int SummaAllElements(int Array[][col]) 
int SummaAllElements(int Array[row][col]) //int Array[][col] обязательно, int Array[row][col] - необязательно, так как содержимое первых [] не учитывается
{
	int Summa = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			Summa += Array[i][j];
		}
	}
	return Summa;
}

void main()
{
#ifdef LESSON
	setlocale(LC_ALL, "rus");
	//foo();
	//int c;
	//int q = 11, w = 12;
	//cout<< Sum(q,w);
	//cout << c << endl;

	int a = 1;
	cout << a << endl;
	a = foo(a);
	cout << a << endl;
#endif // LESSON

#ifdef WORKLESSON
	setlocale(LC_ALL, "rus"); //вызов функции с двумя параметрами
	srand(time(NULL)); //вызов функции srand с результатом работы другой функции(time) в в качестве параметра
	//Hello(); //вызов фукцнии без параметров
	//Hello();
	//Hello();
	//Hello();
	//Hello();
	//Stars(8); //вызов функции с одним параметром
	//int Count = 15;
	//Stars(Count); //вызов функции c передачей значений переменной в качестве параметра
	//cout << "Введите кол-во звездочек: "; cin >> Count;
	//Stars(Count);
	//double D = 3.5;
	//Stars(D); //типы данных должны совпадать
	//Line('%', 65); //порядок параметров и их типы данных при вызове функции должны соответствова определению функции
	////Line(65, '%');
	//char Symbol = ' ';
	//int Size = 0;
	//cout << "Введите символ: "; cin >> Symbol;
	//cout << "Введите кол-во символов: "; cin >> Size;
	//Line(Symbol, Size); //вызов функции с двумя параметрами
	//MyPow(5, 3); //на место вызова функции будет возвращен её результат
	//cout<<"Число 5 в степени 3 равно: "<<MyPow(5,3)<<endl;
	//int Result = MyPow(5, -3); //инциализация переменной результатом работы функции
	//if(Result!=0)cout << "Число 5 в степени 3 равно: " << Result << endl;
	////int MagicNumber = rand();
	//Line('$', -3);	
	//int One = 15, Two = -3;
	//cout<<"Число One: "<<One<<" Число Two: "<<Two<<endl;
	//Change(One, Two); //в функцию при вызове передаются только значения(содержимое), а не сами переменные
	//cout<<"Число One: "<<One<<" Число Two: "<<Two<<endl;

	/*const int Size = 20;
	int Array[Size]{};
	int Result = 0;
	for (int i = 0; i < Size; i++)
	{
		Array[i]=rand()%(100-(-99))-99;
		cout << Array[i] << " ";
	}
	cout << endl;
	Result = CountEvenElements(Array, Size);
	cout<<"Кол-во четных элементов: "<<Result<<endl;
	Result = ChangeNegativeElements(Array, Size);
	cout << "Кол-во отрицательных элементов: " << Result << endl;
	for (int i = 0; i < Size; i++)
	{
		cout << Array[i] << " ";
	}
	cout << endl;*/

	//const int row = 3;
	//const int col = 4;
	//размеры массива задаются глобальными константами
	int Array[row][col]{};
	//в первых [] указывается кол-во строк, а во вторых [] указывается кол-во элементов в каждой строке
	int Summa = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			Array[i][j] = rand() % (100 - (-99)) - 99;
			cout << Array[i][j] << "\t";
		}
		cout << endl;
	}
	//Summa=SummaAllElements(Array, row, col);
	Summa = SummaAllElements(Array);
	cout << "Сумма всех элементов массива: " << Summa << endl;

	//для каждой строки двумерного массива можно вызвать функцию принемающу одномерный массив
	for (int i = 0; i < row; i++)
	{
		ChangeNegativeElements(Array[i], col); //каждая i-я строка двумерного массива может быть воспринята как одномерный массив
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << Array[i][j] << "\t";
		}
		cout << endl;
	}

#endif // WORKLESSON
}
//реализация функции меняющей значения двух переменных местами
void Change(int A, int B)  //копирование значений в собственные переменные А и В(параметры функции)
{ //int A=One, B=Two; //функция работает только с копиями значений
	cout << "Работает функция Change!" << endl;
	cout << "Первое число: " << A << " Второе число: " << B << endl;
	int temp = A;
	A = B;
	B = temp;
	cout << "Первое число: " << A << " Второе число: " << B << endl;
	cout << "Функция Change завершила работу!" << endl;
}

//реализация функции заменяющей отрицательрные элементы массива
int ChangeNegativeElements(int Array[], int Size)
{
	//int Array[] - новое имя для массива, передаваемого в фукнкцию
	//функция работает с оригинальным массвом напрямую, непосредственно изменяя его элементы
	int CountNegativeElements = 0; //кол-во отрицательных элементов
	for (int i = 0; i < Size; i++)
	{
		if (Array[i] < 0)
		{
			CountNegativeElements++;
			Array[i] = 0; //заменяем все отрицательные элементы на ноль
		}
	}
	return CountNegativeElements;
}