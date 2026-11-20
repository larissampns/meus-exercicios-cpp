#include<iomanip>
#include<iostream>
using namespace std;
int main()
{ 
    //declaração de variáveis 
    int funcionario;
    int horas;
    double porhora;
     cin>>funcionario>>horas>>porhora;
    double recebe=horas*porhora;
    cout<<fixed<<setprecision(2);
    
    //saída de dados 
    cout <<"NUMBER = "<< funcionario <<endl;
    cout <<"SALARY = U$ " <<recebe <<endl;
    return 0;
    
}
