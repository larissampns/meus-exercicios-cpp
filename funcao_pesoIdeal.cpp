#include<iostream>
#include<iomanip>
using namespace std;
float ideal (float h, char sexo)
{
    if (sexo=='F'){
        return 62.1*h - 44.7; //funcao h e sexo
    }
    if (sexo == 'M'){
        return 72.7*h - 58;
    }
    
    return 0;
}
int main()
{
    float h;//altura da pessoa
    char sexo; //sexo da pessoa
    float PesoIdeal; //peso ideal da pessoa
    
    cin >> h >> sexo;
    
    PesoIdeal = ideal (h, sexo);
    
    cout << fixed << setprecision(2);
    cout << "Peso ideal = " << PesoIdeal << " kg"<<endl;
    return 0;
}
