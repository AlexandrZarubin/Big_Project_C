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
    /*   //�������� ������� �� 5 ����� �����
       int Array[5]; //int Array0,Array1,Array2,Array3,Array4;
       Array[0] = -17;
       Array[1] = 3;
       Array[2] = -555;
       Array[3] = 12;
       Array[4] = 333;

       //Array[-1] = 1000; ����� �� ������� �������
       //Array[15] = 2000; ����� �� ������� �������
       cout << Array[0] << endl;//����� �� ����� �������� ������� � �������� 0
       cout << Array[1] << endl;
       cout << Array[2] << endl;
       cout << Array[3] << endl;
       cout << Array[4] << endl;

       //cout << Array[-1] << endl; ����� �� ������� �������
       //cout << Array[15] << endl; ����� �� ������� �������
       system("cls");

      const int  Size = 4;//���������� ��� ������� ������� �������
      int A[Size] = {-10,15,8};//���������� ������� � ��� ��������������� �������������
      cout << "������ �:" << endl;
      cout << A[0] << endl;
      cout << A[1] << endl;
      cout << A[2] << endl;
      cout << A[3] << endl;
      //���������� � ������������ ������� ������� (������������ ������)
      float B[Size] = {}; //float B[Size]={};
      cout << "������ �: " << endl;
      cout << B[0] << endl;
      cout << B[1] << endl;
      cout << B[2] << endl;
      cout << B[3] << endl;
      system("cls");
      //������ � �������� � ������� �����
      for (int i = 0; i < Size; i++)//i = 0 1 2 3 ����� 4
      {
          cout << "A[" << i << "]=" << A[i] << "; ";
      }
      cout << endl;
      system("cls");

      // I ���� ���������� ��������� �������
      for (int i = 0; i < Size; i++)//i = 0 1 2 3 ����� 4
      {
          cout << "������� �������� "<<i+1<<"-�� �������� ������� ";
          cin >> B[i];
      }
      // II ���� ���������� �������� ��� ���������� �������
      for (int i = 0; i < Size/2; i++)//�������� � �������� �� 0 �� Size/2 (0 � 1)
      {

           B[i]*=2; // ��������� �������� �� 2
      }
      // III ���� ������ �������� ������� �� �����
      for (int i = 0; i < Size; i++)//i = 0 1 2 3 ����� 4
      {
          cout << "B[" << i << "]=" << B[i] << "; ";
      }
      cout << endl;
      */
      //���������� ������� ���������� �������
    const int Count = 20;//���-�� �������� �������
    int Numbers[Count]{};//������ ������ ����� �������� Count
    int Count_Negative = 0; //���-�� �������������� �������� �������
    for (int i = 0; i < Count; i++)
    {
        //rand()%(a-b)+b    ;b...a-1
        //rand()%(59-46)+46 ;46..58 ������������
        //rand()%(-64-(-98))+(-98) ��� rand() % (-64 - (-98))-98  ;-98...-65
        //rand()%(19-(-15))-15              ; -15...18
        Numbers[i] = rand() % (100 - (-99)) - 99; //�� -99 �� 99 ������������
        //rand()%(A-B)+B - ������� ���������� ��������� ����� � B �� A(B...A-1)
        //������� �, �� ��������� �
        //II
        if (Numbers[i] < 0)Count_Negative++; //������� ���-�� ������������� ���������
        //III
        cout << Numbers[i] << " ";
    }
    cout << "\n���-�� ������������� ��������� �����: " << Count_Negative << endl;

    //����� �� ����� ������ ������������� �����
        //����� �� ����� ������ ������������� �����
    for (int i = 0; i < Count; i++)
    {
        if (Numbers[i] >= 0)
            cout << "Numbers[" << i << "]=" << Numbers[i] << "; ";
    }
    cout << endl;
#endif // DEBUG


}