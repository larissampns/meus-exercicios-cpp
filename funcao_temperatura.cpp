#include <iostream>
#include <iomanip>
using namespace std;
//funcao
void converte(float F, float &C, float &K)
{
    C = (5.0/9) * (F-32);
    K = C + 273;
    return;
}
int main()
{
    //declaracao de variaveis
    float F; 
    float Celsius, Kelvin;
    
    //entrada de dados
    cin >> F; 
    
    //chama a funcao
    converte(F,Celsius,Kelvin);
    
    //saida de dados
    cout << fixed <<setprecision(2);
    cout << "Celsius: " << Celsius << endl;
    cout << "Kelvin: " << Kelvin << endl;
    
    
    
    
    
    return 0;
}
