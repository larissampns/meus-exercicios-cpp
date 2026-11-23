#include <iostream> 
#include <iomanip>
#include <cmath>
using namespace std;
//retorna 1 se delta for menor que zero
//retorna 2 se delta for maior ou igual a zero
int calc_raizes(float a, float b, float c, float &x1, float &x2)
{
    float delta = (b * b) - (4*a*c);
	if (delta < 0 || a==0){
		return 1;
	}
	else {
		x1 = (-b - sqrt(delta))/(2*a);
		x2 = (-b + sqrt(delta))/(2*a);
		
		if (x1>x2){
		    float aux = x1;
		    x1=x2;
		    x2=aux;
		}
		return 0;
	}
}

int main()
{
    float a, b, c; //coeficientes da eq. segundo grau
    float x1, x2; //raizes da equacao
    int result; 
    
    //lendo os coeficientes da equacao 
    cin >> a >> b >> c;
    
    //calculando as raizes
    
    result=calc_raizes(a,b,c,x1,x2);
    
    //mostrando resultado
    
    cout <<fixed<<setprecision(5);
    if (result == 1){
        cout << "Impossivel calcular" << endl;
    }
    else{
        if (x1==x2){
            cout << "x = " << x1 << endl;
        }
        else{
            cout << "x1 = " << x1 <<endl;
	        cout << "x2 = " << x2 << endl;
        }
            
    }
        
		
return 0;
}
