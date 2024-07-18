#include<iostream>
using namespace std;

/*Вложенные циклы*/
#define less
#define DZ
int main()
{
	setlocale(LC_ALL, "rus");
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

	return 0;
}