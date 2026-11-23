#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
// funcao calc_mod
float calc_mod(float x, float y, float z)
{
    return sqrt (x*x + y*y + z*z);
}
int main()
{
    float x, y, z; //declaracao de variaveis
    float modulo; //modulo do vetor
    
    cin >> x >> y >> z; //entrada de dados
    
    modulo = calc_mod (x, y, z); //chama a funcao
    
    //saida de dados
    cout << fixed << setprecision(2);
    cout << modulo << endl;
    
    return 0;
}
