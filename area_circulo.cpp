#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    //declaracao de variaveis 
    double R;
    double pi=3.14159;
    double A;
    //entrada de dados
    cin>>R;
    //calculo da area
    A=pi*R*R;
    //saida de dados
    cout<<fixed<<setprecision(3);
    cout<<"AREA = "<<A<<endl;
    return 0;
}
    
