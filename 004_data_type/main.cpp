#include<iostream>

using namespace std;

void main()
{
    //int A = 4;//���������� � ������������� �������� � ���� ������ int
       //int B = 3.94;// B = 3; ����� ��������� ������� �����
       //cout << "��������� �: " << B << endl;
       ////int C = { 3.94 };//{} - �������������� ������������, �������� �������� ����������� ����� ������
       ////int D{ 3.14 };   //{} - �������������� ������������, �������� �������� ����������� ����� ������
       ////B = { 15.5 };//{} - �������� �������� ����������� ����� ������
       //
       //double PI = 3.14;
       //B = PI;//��� ������������� � ����� �������� ������ ����� ����� �������� PI
       ////B = { PI };// - �������� �������� ����������� ����� ������
       //cout << "��������� �: " << B << endl;

       //int A = 4; //4 ������������ ������� ���� ������ int
       //long B = 15L;//15L ��� 15l - ������� ���� long
       //unsigned int C = 178u;//178u - ������� ���� ������ unsigned int
       //unsigned long long D = 123456ull;// ������� ���� ������ unsigned long long
       //double E = 3.7;//3.7 ������� ���� ������ double
       //float F = 3.7f;//3.7F ��� 3.7f ������� ���� ������ float
       //double G = 3.7e-20;//��������������� ������� ���� ������ double
       //float H = 3.7e-20F;//��������������� ������� ���� ������ float

       //double X = 0;//������� ����������� �������������� ���� ������
       //double Y = 3.0; //3.0 ������� ���� ������ double
       //double Z = 0.0; //0.0    0.    .0
       //float W = 0.0F; //0.0F ��� 0.0f    //0f - ��� ������
       //float U = 0.f;  //0.0F
       //char symbol = '�';// '�' - ���������� ������� ���� ������ char
       //cout << "������, ���!" << endl;//"������, ���!" ��������� �������

       //�������� ����� ������ �� ����������� �� ������� � ��������
       //bool, char, unsigned cahr, short, unsigned short, int, unsigned int, long, unsigned long
       //long int, unsined long int,long long, unsigned long long,float, double, long double

    unsigned int A = 3000000000;//������� ������� �������������� �� long long � unsigned int
    cout << "A= " << A << endl;

    int B = 3.14;// ������ ������� �������������� �� double � int
    float C = 3.14;//������ ������� �������������� �� double � float
    C = A;//������� ����������� �������������� �� unsigned int � float
    cout << "C= " << C << endl;
    C = 5000000000;//������� ����������� �������������� �� long long � float
    cout << "C= " << C << endl;

    system("cls");

    //�������������� ����� ������ � ����������
    int D = 10;
    cout << "D/B: " << (double)D / B << endl;//double/int=double
    //(double) ����� ��������������(����������) ���� ������ �������� ��������� D � ���� ������ Double
    //����� �������������� ����� ��������� ������ � ��� ���������, ��� ������������
    //��� ���� ���������� D ��������� ���� ������ int, ����� �������������� ������ �� ��������

   // double E = D / B;//int/int=int double E=int
    double E = (float)D / (double)B;   //float/double=double;
    //(float)D �� �������� �� ���������, ��� ��� dobule ������
    cout << "E=: " << E << endl;
    //   2     3     1  
    //int-float+short*long=float
    //1 short*long=long
    //2 int-float=float
    //3 float+long=float
    system("cls");

    double H = ((D / 4) / E) * B;//double
    //     1    2       3    
    //((int/int)/double)*int
    //1 int/int=int 10/4=2
    //2 int/double=double 2/3.(3)=0.6
    //3 double*int=double 0/6*3=1.8
    cout << "H=: " << H << endl;

    H = (((double)D / 4) / E) * B;//double
    //     1    2       3    
    //((double/int)/double)*int
    //1 double/int=double 10.0/4=2.5
    //2 double/double=double 2.5/3.(3)=0.75
    //3 double*int=double 0/75*3=2.25
    cout << "H=: " << H << endl;

    H = ((D / 4.0) / E) * B;// ������������� ������ ������� ���� ������ (double)
    //     1    2       3    
    //((double/int)/double)*int
    //1 int/double=double 10/4.0=2.5
    //2 double/double=double 2.5/3.(3)=0.75
    //3 double*int=double 0/75*3=2.25
    cout << "H=: " << H << endl;


}
