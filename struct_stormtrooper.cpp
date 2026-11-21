/*#include<iostream>
#include<iomanip>
using namespace std;
//declaracao das structs usadas
struct ficha
{
    int id; //numero de identificacao de cada soldado 
    float IM;   //indice de maldade
    float FA;   //forca de abate
    float GA; //grau de aptidao 
};
int main ()
{
    //declaraco de variaveis
    ficha tropa[100]; //vetor do tipo ficha
    int i = 0; //variavel de controle 
    int j; //variavel de controle do for
    int id; //numero de identificacao sem vetor
    int melhor = 0; //storm mais apto
    do{
        cin >> id; //entra com id
        //testa se id e diferente de zero
        if (id != 0 ){
            tropa[i].id = id; //coloca no vetor 
            cin >> tropa[i].IM >> tropa[i].FA; //entra com im e fa
            tropa[i].GA = (tropa[i].IM + tropa[i].FA) / 2; //calculo do grau de aptidao
            i++;
        }
    } while ( id != 0 );
    
    for (j=0; j<=i; j++ ) //achar qual é o melhor
    {
        if ( tropa[j].GA > tropa[melhor].GA)
        melhor = j;
    }
    //saida de dados
    cout << "Stormtrooper escolhido: " << tropa[melhor].id << endl;
    cout << fixed << setprecision(2);
    cout << "GA = " << tropa[melhor].GA <<endl;
    
    return 0;
  */
//OU
#include <iostream> 
#include <iomanip>
using namespace std;
struct stormtrooper
{
    int id; //numero de identificacao de cada soldado 
    float im; //indice de maldade
    float fa; //forca de abate
    float ga; //grau de aptidao
};
int main()
{
    stormtrooper tropa[100]; //vetor e armazena dados stormtrooper
    int i=0; //variavel de controle 
    int j; //variavel do for
    float ga=0; //grau de aptidao
    float maisApto; //storm mais apto
    int escolhido; //storm escolhido
    
    cin >> tropa[i].id; //entra com o id
    while (tropa[i].id != 0) //verificacao
    {
        cin >> tropa[i].im; //entra com o indice de maldade
        while (tropa[i].im<=0 || tropa[i].im>=1)//verificacao
        {
            cin >> tropa[i].im;
        }
        cin >> tropa[i].fa; //entra com a forca de abate
        while (tropa[i].fa<=0 || tropa[i].fa>=1)//verificacao
        {
            cin >> tropa[i].fa;
        }
         
        tropa[i].ga= (tropa[i].im + tropa[i].fa)/2; //calculo do grau de aptidao
        i ++; 
        cin >> tropa[i].id;
    }
    maisApto = tropa[0].ga; 
    escolhido = tropa[0].id;
    for (j = 0; j < i; j++) //achar o mais apto
    {
        if (tropa[j].ga > maisApto){
            maisApto = tropa[j].ga;
            escolhido = tropa[j].id;
        }
    }
    
    //saida de dados
    cout << "Stormtrooper escolhido: " << escolhido << endl;
    cout << fixed << setprecision(2);
    cout << "GA = " << maisApto << endl;
    
    return 0;
}
}
