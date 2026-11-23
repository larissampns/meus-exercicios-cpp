#include <iostream>
#include <iomanip>
using namespace std;
//funcao area do circulo
double calcularAreaCirculo (double raio)
{
    return 3.14159*raio*raio;
}
//funcao area retangulo
double calcularAreaRetangulo (double base, double altura)
{
    return base*altura;
}
//funcao area triangulo
double calcularAreaTriangulo (double base, double altura)
{
    return (base*altura)/2;
}
int main()
{
    string figura; //entra com a figura 
    double raio, base, altura; //numeros das respectivas medicoes
    double area; //area das figuras
    
    cin >> figura; //entra com a figura
    while (figura != "fim"){          //enquanto o figura for diferente de fim acontece 
        if (figura == "circulo"){
            cin >> raio;
            area = calcularAreaCirculo(raio); //chama a funcao da area do circulo com o parametro raio
            cout << fixed << setprecision (2);
            cout << "area = " << area << endl;
        }   
        else if(figura == "retangulo"){
            cin >> base >> altura;
            area = calcularAreaRetangulo(base, altura); //chama a funcao da area do circulo com o parametro base e altura
            cout << fixed << setprecision (2);
            cout << "area = " << area<< endl;
        }
            else{
                cin >> base >> altura;
                area = calcularAreaTriangulo(base, altura); //chama a funcao da area do circulo com o parametro base e altura
                cout << fixed << setprecision (2);
                cout << "area = " << area << endl;
            }
    
        cin >> figura;
    }
    
    
    return 0;
}
