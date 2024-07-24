#include<iostream>

using namespace std;


/*			Шаблоны функций			*/
/*

// int a+b+c
int Sum(int a, int b, int c)
{
	a++;
	return a + b + c;
}

//int a+b
int Sum(int a, int b)
{
	return a + b;
}


//double a+b
double Sum(double a, double b)
{
	return a + b;
}
*/

/*
template<typename T>T Sum(T a, T b)
{
	return a + b;
}
*/


//template<typename T1,typename T2>T1 Sum(T1 a, T2 b)
//{
//	return a + b;
//}
// 
//template<typename T1,typename T2>void Sum(T1 a, T2 b)
//{
//	cout << a << endl;
//	cout << b << endl;
//}

template<class T1, class T2>void Sum(T1 a, T2 b)
{
	cout << a << endl;
	cout << b << endl;
}
void main()
{
	//cout << Sum(1, 2, 3) << endl;
	//cout << Sum(1, 2) << endl;
	//cout << Sum(1.5, 2.2) << endl;

	Sum(2, 3.5);
	Sum(2, "Hello");
}