#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main ()
{
    //declaracao de variaveis 
    double x;
    double m;
    double s;
    double fx;
    double pi=3.14159;
    //entrada de dados
    cin>>x>>m>>s;
    //calculo da gaussiana 
    fx=exp(-((x-m)*(x-m)/(2*s*s)))*1/sqrt(2*pi*s*s);
    //saida de dados
    cout<<fixed<<setprecision(4);
    cout<<fx<<endl;
    
    
    
     return 0;
}
