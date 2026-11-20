#include<iomanip>
#include<iostream>
using namespace std;
int main ()
{
    //declaracao de variaveis 
    double leva;
    double total;
    double troco;
    cin >>leva>>total;
    troco= leva - total;
    //saida de dados 
    cout<<fixed<<setprecision(2);
    cout<<"TROCO = " <<troco<<endl;
    
    
    return 0;
}
