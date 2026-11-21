#include <iostream> 
#include <iomanip>
using namespace std;
//declaracao das structs
struct ficha
{
    string nome; //nome do padawan
    int pontos; //pontos do padawan
};

int main()
{
    //declaracao de variaveis
    
    int N; //numero de Padawans a cadastrar
    int i; //variavel de controle do for
    ficha padawan[1000]; //vetor 
    int melhor = 0; //padawan co mais pontos 
    float soma = 0; //somar os pontos 
    float media = 0; //media dos pontos
    int cont = 0; //contador 
    
    cin >> N;
    while (N<0 || N>1000) //verificacao do numero de padawans
    {
        cin >> N;
    }
    
    for (i=0; i<N; i++)
    {
        cin.ignore();
        getline(cin,padawan[i].nome); 
        cin >> padawan[i].pontos;
        if (padawan[melhor].pontos < padawan[i].pontos){
            melhor = i;
        }
        soma= soma + padawan[i].pontos;
        cont++;
    }
    media = soma/cont; //calculo da media
    
    //saida de dados
    cout << "Padawan com mais pontos: " << padawan[melhor].nome << endl;
    cout << "Pontos: " << padawan[melhor].pontos << endl; 
    cout << fixed << setprecision(2);
    cout << "Media da turma: " << media << " pontos" << endl;
    
    
    return 0;
}
