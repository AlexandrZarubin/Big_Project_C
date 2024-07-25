
/*Указатели и массивы. Арифметика указателей*/

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    const int SIZE = 5;

    int arr[SIZE]{ 5,6,8,9,4 };
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "================================" << endl;
    int* pArr = arr;
    cout << "arr\t" << arr << endl;
    cout << "pArr\t" << pArr << endl;
    cout << "*arr\t" << *arr << endl;
    cout << "*pArr\t" << *pArr << endl;
    cout << "arr[i=2]  " << *(arr + 2) << endl;
    cout << "================================" << endl;

    for (int i = 0; i < SIZE; i++)
    {
        //cout << arr[i] << endl;
        cout << *(arr + i) << endl;
    }


}

