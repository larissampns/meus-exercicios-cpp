#include <iostream>
using namespace std;
struct ficha
{
    string titulo; //titulo do trabalho
    int nota; //nota do trabalho 
    int classe; //classe 1 ou 2
};
int main()
{
    int N = 0; //quantidade de trabalhos avaliados
    ficha registros[100];//vetor 
    int i; //variavel de controle do for
    float soma1=0; //soma da classe 1
    float soma2=0; //soma classe 2
    float media1=0; //media classe 1
    float media2=0; //media classe 2
    int cont1=0; //contador classe 1
    int cont2=0; //contador classe 2
    
    cin >> N;
    while (N<1 || N>100)
    {
        cin >> N;
    }
    for (i=0; i < N; i++)
    {
        cin.ignore();
        getline(cin,registros[i].titulo);
        cin >> registros[i].nota;
        while (registros[i].nota<0 || registros[i].nota>10)//verificacao
        {
            cin >> registros[i].nota;
            
        }
        
        cin >> registros[i].classe;
        while (registros[i].classe != 1 && registros[i].classe !=2)
        {
            cin >> registros[i].classe; 
        }
        if (registros[i].classe == 1){
            soma1 = soma1 + registros[i].nota;//soma da classe 1
            cont1++; //conta as notas do trabalho da classe 1
        } else if (registros[i].classe == 2){
            soma2 = soma2 + registros[i].nota;//soma da classe 2
            cont2++; //conta as notas do trabalho da classe 2
        }
            
            
        
    }
    //saida de dados
    
    if (cont1 > 0){
        media1 = soma1/cont1;
        cout << "Classe 1: " << media1 << endl;
    }
        else{
            cout << "Classe 1: nenhum" << endl;
        }
    
    if (cont2 > 0){
        media2 = soma2/cont2;
        cout << "Classe 2: " << media2 << endl;
    }
        else{
            cout << "Classe 2: nenhum" << endl;
        }
    return 0;
}
