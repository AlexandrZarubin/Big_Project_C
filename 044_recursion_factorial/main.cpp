//			Рекурсия.  Факториал

//		N!=N*(N-1)!
//		3!=3*(3-1)!
//		2!=2*(2-1)!
//		1!=1
//		6

#include<iostream>
using namespace std;

int Fact(int N)
{
	if (N == 0) return 0;
	if (N == 1) return 1;
	return N * Fact(N - 1);
}

void main()
{
	setlocale(LC_ALL, "rus");
	cout << Fact(5);

}