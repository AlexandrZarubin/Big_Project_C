﻿#include<iostream>
#define PI 3.14
#define tab "\t"
#define begin {
#define end }
using namespace std;


/*
	Препроцессор
	#define
*/


void main()
{
	cout << PI << endl;
	cout << "text" << tab << "text" << endl;
	for (int i = 0; i < 5; i++)
		begin
		cout << i << endl;
	end
}