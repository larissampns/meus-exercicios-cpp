#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
   //declaracao de variaveis 
   double C;
   double i;
   int t;
   double M;
    //entrada de dados 
   cin>>C>>i>>t;
   //calculo do i
   i=i/100;
   //calculo do montante 
   M=C * pow ((1+i),t);
  
   //saida de dados
   cout<<fixed<<setprecision(2);
   cout<<"LUCRO = "<<M-C<<endl;
   

    return 0;
}
}
