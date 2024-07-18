#include<iostream>

using namespace std;

void main()
{
    //int A = 4;//ОбЪявление и инициализация перемной А типа данных int
       //int B = 3.94;// B = 3; будет отброшена дробная часть
       //cout << "Переменая В: " << B << endl;
       ////int C = { 3.94 };//{} - унифицированая инциализация, содержит проверку соотвествия типов данных
       ////int D{ 3.14 };   //{} - унифицированая инциализация, содержит проверку соотвествия типов данных
       ////B = { 15.5 };//{} - содержит проверку соотвествия типов данных
       //
       //double PI = 3.14;
       //B = PI;//при присвваиваний В будет помещена только целая часть значения PI
       ////B = { PI };// - содержит проверку соотвествия типов данных
       //cout << "Переменая В: " << B << endl;

       //int A = 4; //4 целочисленый литерал типа данных int
       //long B = 15L;//15L или 15l - литерал типа long
       //unsigned int C = 178u;//178u - литерал типа данных unsigned int
       //unsigned long long D = 123456ull;// литерал типа данных unsigned long long
       //double E = 3.7;//3.7 литерал типа данных double
       //float F = 3.7f;//3.7F или 3.7f литерал типа данных float
       //double G = 3.7e-20;//экспонециальный литерал типа данных double
       //float H = 3.7e-20F;//экспонециальный литерал типа данных float

       //double X = 0;//неявное расширяющее преоброзование типа данных
       //double Y = 3.0; //3.0 литерал типа данных double
       //double Z = 0.0; //0.0    0.    .0
       //float W = 0.0F; //0.0F или 0.0f    //0f - так нельзя
       //float U = 0.f;  //0.0F
       //char symbol = 'Щ';// 'щ' - символьный литерал типа данных char
       //cout << "привет, мир!" << endl;//"Привет, мир!" строковый литерал

       //иерархия типов данных по старшенству от младего к старшему
       //bool, char, unsigned cahr, short, unsigned short, int, unsigned int, long, unsigned long
       //long int, unsined long int,long long, unsigned long long,float, double, long double

    unsigned int A = 3000000000;//неявное сужащее преобразование от long long к unsigned int
    cout << "A= " << A << endl;

    int B = 3.14;// неяное сужащее преобразование от double к int
    float C = 3.14;//неяное сужащее преобразование от double к float
    C = A;//неявное расширяющее преобразование от unsigned int к float
    cout << "C= " << C << endl;
    C = 5000000000;//неявное расширяющее преобразование от long long к float
    cout << "C= " << C << endl;

    system("cls");

    //Преобразование типов данных в выражениях
    int D = 10;
    cout << "D/B: " << (double)D / B << endl;//double/int=double
    //(double) явное преобразование(приведение) типа данных значение переменой D К типу данных Double
    //явное преобразование типов сработает только в том выражений, где использовано
    //при этом переменнпя D останется типа данных int, будет преобразованно тольео ее значение

   // double E = D / B;//int/int=int double E=int
    double E = (float)D / (double)B;   //float/double=double;
    //(float)D не повлияет на результат, так как dobule старше
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

    H = ((D / 4.0) / E) * B;// использование литера нужного типа данных (double)
    //     1    2       3    
    //((double/int)/double)*int
    //1 int/double=double 10/4.0=2.5
    //2 double/double=double 2.5/3.(3)=0.75
    //3 double*int=double 0/75*3=2.25
    cout << "H=: " << H << endl;


}
