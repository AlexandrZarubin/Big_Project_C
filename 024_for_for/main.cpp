#include<iostream>
#include<windows.h>
using namespace std;

/*Вложенные циклы*/
//#define less
//define DZ
#define less2
int main()
{
	//setlocale(LC_ALL, "rus");
	SetConsoleOutputCP(1251);//меняем кодировку на вывод
#ifdef less
	for (int i = 0; i < 5; i++)
	{
		cout << "сработал 1й цикл for итерация № " << i << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tсработал 2й цикл for итерация № " << j << endl;
		}
	}
#endif // less
#ifdef DZ
	int heigth, width;
	cout << "Введите высоту прямоугольника" << endl;
	cin >> heigth;
	cout << "Введите ширину прямоугольника" << endl;
	cin >> width;
	for (int i = 0; i < heigth; i++)
	{
		for (int j = 0; j < width; j++) 
		{
			cout << "*";
		}
		cout << endl;
	}
#endif //DZ
#ifdef less2
    //cout << "---Программа подсчета кол-ва урпажнений в спортзале!---" << endl;
//int povtor = 0, podhod = 0;//кол-о подходов и кол-во повторений в подходе
//cout << "Введите кол-во подходов: "; cin >> podhod;
//cout << "Введите кол-во повторений:"; cin >> povtor;
//for (int i = 1; i <= podhod; i++)//цикл подходов
//{
//    cout << "Подход № " << i << endl;
//    for (int j = 0; j <= povtor; j++)// цикл повторенийв родходе
//    {
//        cout << "Выполнено" << j << "повторений, осталось " << povtor - j << " Повторений!" << endl;
//     }
//    if (i != podhod)//if(i<podhod)
//    {
//        cout << "Подоход № " << i << " Закончен! Перерыв 2 мин!" << endl;
//        Sleep(2000);//добавляет задержку работы программы в миллисекундах
//    }
//    
//}
//cout << "Упражнение выполнено!" << endl;

//Таблица умножения
    for (int i = 1; i < 10; i++)//цикл прохода по строкам
    {
        for (int j = 1; j < 10; j++)//цикл заполнения строк(цикл по стобцам)
        {
            cout << i * j << "\t";
        }
        cout << endl;//превращает вывод данных в таблицу
    }
#endif // less2


	return 0;
}