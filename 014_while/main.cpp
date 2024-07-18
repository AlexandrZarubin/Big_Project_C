#include<iostream>
using namespace std;
//while


//#define WHILE
//#define DOWHILE
//#define DZ1 //выводит линию из символов
//#define DZ2 //написать программу, которая находит сумму всех целых нечетных чисел в диапозоне, указаном пользователем
#define lesson
void main()
{
	setlocale(LC_ALL, "rus");
#ifdef WHILE
	int a = 0;

	while (a < 10)
	{
		//cout << "the text appeared on the screen "<<a+1 << endl;
		cout << "Variable a = " << a + 1 << endl;
		a++;

	}
#endif // WHILE

#ifdef DOWHILE
	int b = 0;
	do
	{
		cout << "Variable b = " << b + 1 << endl;
		b++;
	} while (b < 20);


#endif // DOWHILE

#ifdef DZ1
	int a, b, i = 0;
	char symbol = ' ';
	cout << "enter how much symbol will be"; cin >> a;
	cout << "enter what line will be: 1 horizontal, 2 vertical "; cin >> b;
	cout << "enter the symbol "; cin >> symbol;
	if (a < 0 || b != 1 && b != 2)
	{
		cout << "you entered it correctly " << endl;
		return;
	}
	if (b == 1)
	{
		do
		{
			cout << symbol << " ";
			i++;
		} while (i < a);
	}
	else {
		while (i < a)
		{
			cout << symbol << endl;
			i++;
		}
	}


#endif // DZ

#ifdef DZ2 //написать программу, которая находит сумму всех целых нечетных чисел в диапозоне, указаном пользователем
	int sum = 0;
	int rangeBegin, rangeEnd;
	cout << "enter the start of the range "; cin >> rangeBegin;
	cout << "enter the end of the range "; cin >> rangeEnd;

	do
	{
		if (rangeBegin % 2 != 0)
		{
			sum += rangeBegin;
		}
		rangeBegin++;
	} while (rangeBegin < rangeEnd);
	cout << "sum of all odd numbers " << sum << endl;

#endif // DZ2 
    
#ifdef lesson
    //-------------------------------------------------------------------------------------
    int count = 0;//счетчтк кол-ва отжиманий,
    //цикл с предусловием, сначала проверяет условие,
    //Если условие истина выполняет деиствие в цикле
    // если условие ложно, то цикл будет проигнорирован
    while (count < 10)//заголовок цикла,выход из цикла когда count равен 10
    {
        // тело цикла
        //count++;//изменение счетчика count=count+1
        cout << "Мы отжались " << count + 1 << " раз(а)!" << endl;
        count++;//изменение счетчика count=count+1
    }
    //счетчик объявленый до цикла доступен после него
    cout << count << endl;
    system("cls");

    //------------------------------------------------------------------------------
    /*int posuda = 0;//кол-во посуды
    cout << "введите кол-во посуды: "; cin >> posuda;
    if (posuda < 0)cout << "Введено некоректное значение!" << endl;
    while (posuda >= 0)//while(posuda!=0) выход из цикл будет когда posuda станет меньше нуля
    {
        if (posuda > 15)
        {
            cout << "слишком много таралоек" << endl;
            break;//прерывание работы цикла
        }
        if (posuda == 5)
        {
            cout << "Посуда " << posuda << ": Сильное загрязнение, пусть отмокает!" << endl;
            posuda--;//Принудительно изменение счетчика для пропуска 5 посуды
            continue;//пропускает все деиствия после себя и переходит к следующему шагу цикла(проверке условия цикла)
        }
        if (posuda == 0)cout << "Вся посуда вымыта!" << endl;
        else cout << "Осталось " << posuda << " посуды!" << endl;
        if (posuda == 2)
        {
            cout << "домоем потом!" << endl;
            break;//прерывание работы циклы
        }
        posuda--;//уменьшение счетчика --posuda;
    }
    cout << posuda << endl;
    */
    //-----------------------------------------------------------------------------
    //цикл с посустловием,одна итерация (шаг цикла) будет выполнена в любом случае,
    // а потом будет проверка условия, если условие истина будем продолжена работа в цикле
    // ("Нужно ли продолжать действие в цикле или одной итераций достачно?")

    double T = 100.0;

    /*do
    {
        cout << "Введите температуру процссора: ";
        cin >> T;
    } while (T < 65);
    cout << "Перегрев процессора!" << endl;
    */

    //--------------------------------------------------------
    // цикл с предусловием
    cout << "Введите температуру процссора: ";
    cin >> T;
    while (T < 65)
    {
        cout << "Введите температуру процссора: ";
        cin >> T;
    }
    cout << "Перегрев процессора!" << endl;
#endif // lesson


}