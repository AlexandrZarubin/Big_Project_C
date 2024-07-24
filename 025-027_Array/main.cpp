#include<iostream>
#include<stdlib.h>
#include<time.h>
//Array
//#define WORK
//#define WORK1
#define LESSON
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

#ifdef WORK
	int arr[4]{};
	arr[0] = 5;
	cout << arr[0];
#endif // WORK

#ifdef WORK1
	const int SIZE = 5;
	int arr[SIZE]{};
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = i;
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;;
	}

#endif // WORK1
#ifdef LESSON
    system("chcp 1251");
    system("cls");
    srand(time(NULL));
    /*   //Создание Массива из 5 целых чисел
       int Array[5]; //int Array0,Array1,Array2,Array3,Array4;
       Array[0] = -17;
       Array[1] = 3;
       Array[2] = -555;
       Array[3] = 12;
       Array[4] = 333;

       //Array[-1] = 1000; Выход за границы массива
       //Array[15] = 2000; Выход за границы массива
       cout << Array[0] << endl;//Вывод на экран элемента массива с индексом 0
       cout << Array[1] << endl;
       cout << Array[2] << endl;
       cout << Array[3] << endl;
       cout << Array[4] << endl;

       //cout << Array[-1] << endl; Выход за границы массива
       //cout << Array[15] << endl; Выход за границы массива
       system("cls");

      const int  Size = 4;//Коснатанта для задания резмера массива
      int A[Size] = {-10,15,8};//объявление массива и его унифицированная инициализация
      cout << "Массив А:" << endl;
      cout << A[0] << endl;
      cout << A[1] << endl;
      cout << A[2] << endl;
      cout << A[3] << endl;
      //объявление и нициализация пустого массива (Заполненного нулями)
      float B[Size] = {}; //float B[Size]={};
      cout << "Массив В: " << endl;
      cout << B[0] << endl;
      cout << B[1] << endl;
      cout << B[2] << endl;
      cout << B[3] << endl;
      system("cls");
      //работа с массивом с помощью цикла
      for (int i = 0; i < Size; i++)//i = 0 1 2 3 выход 4
      {
          cout << "A[" << i << "]=" << A[i] << "; ";
      }
      cout << endl;
      system("cls");

      // I Цикл заполнения элементов массива
      for (int i = 0; i < Size; i++)//i = 0 1 2 3 выход 4
      {
          cout << "Введите значение "<<i+1<<"-го элемента массива ";
          cin >> B[i];
      }
      // II Цикл выполнения действий над элементами массива
      for (int i = 0; i < Size/2; i++)//элементы с индексом от 0 до Size/2 (0 и 1)
      {

           B[i]*=2; // домножаем элементы на 2
      }
      // III Цикл Вывода элемнтов массива на экран
      for (int i = 0; i < Size; i++)//i = 0 1 2 3 выход 4
      {
          cout << "B[" << i << "]=" << B[i] << "; ";
      }
      cout << endl;
      */
      //Заполнение массива случайными числами
    const int Count = 20;//кол-во элемнтов массива
    int Numbers[Count]{};//пустой массив чисел размером Count
    int Count_Negative = 0; //кол-во отрицательного элемнтов массива
    for (int i = 0; i < Count; i++)
    {
        //rand()%(a-b)+b    ;b...a-1
        //rand()%(59-46)+46 ;46..58 включительно
        //rand()%(-64-(-98))+(-98) или rand() % (-64 - (-98))-98  ;-98...-65
        //rand()%(19-(-15))-15              ; -15...18
        Numbers[i] = rand() % (100 - (-99)) - 99; //от -99 до 99 включительно
        //rand()%(A-B)+B - формула генератора случайных чисел с B до A(B...A-1)
        //включая В, но невключая А
        //II
        if (Numbers[i] < 0)Count_Negative++; //считаем кол-во отрицательных элементов
        //III
        cout << Numbers[i] << " ";
    }
    cout << "\nКол-во отрицательных элементов равно: " << Count_Negative << endl;

    //Вывод на экран только положительных чисел
        //вывод на экран только положительных чисел
    for (int i = 0; i < Count; i++)
    {
        if (Numbers[i] >= 0)
            cout << "Numbers[" << i << "]=" << Numbers[i] << "; ";
    }
    cout << endl;
#endif // DEBUG


}