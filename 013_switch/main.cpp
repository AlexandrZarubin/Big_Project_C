#include<iostream>
//#define WORK
#define calc
using namespace std;
//Оператор switch
void main()
{
	setlocale(LC_ALL, "rus");
#ifdef WORK
	int a;
	cout << "enter the number " << endl;
	cin >> a;

	switch (a)
	{
	case 1:
		cout << "you introducet one " << endl;
		break;
	case 2:
		cout << "you introducet two " << endl;
		break;
	default:
		cout << "i don't know this numbers " << endl;
		break;
	}
#endif // WORK


#ifdef calc
	double a = 0.0, b = 0.0;

	char action = ' ';
	if (true)
	{
		cout << "my calculator" << endl;
		cout << "enter the number 1 "; cin >> a;
		cout << "enter action "; cin >> action;
		cout << "enter the number 2 "; cin >> b;
		cout << endl;
		switch (action)
		{
		case '+':
			cout << "a + b = " << a + b << endl;
			break;
		case '-':
			cout << "a - b = " << a - b << endl;
			break;
		case '*':
			cout << "a * b = " << a * b << endl;
			break;
		case '/':
			cout << "a / b = " << (double)(a / b) << endl;
			break;
		default:
			break;
		}

	}

#endif // calc


}