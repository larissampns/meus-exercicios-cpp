#include <iostream>
#include <iomanip>
using namespace std;

struct ficha
{
    int matricula; //numero da matricula
    float np1; //nota da prova 1
    float np2; //nota da prova 2
    
};

int main()

{
    float media=0; //media do aluno
    
    ficha aluno[1]; //vetor que guarda as informacoes 
    
    cin >> aluno[0].matricula; //entra com a matricula
    cin >> aluno[0].np1; //entra com a nota da prova 1
    cin >> aluno[0].np2; //entra com a nota da prova 2
    
    media = ((2*aluno[0].np1) + (3*aluno[0].np2))/5; //calculo da media
    
    //saida de dados
    cout << "Matricula do aluno: " << aluno[0].matricula << endl;
    cout << fixed << setprecision (2);
    cout << "Nota da primeira prova: " << aluno[0].np1 << endl;
    cout << "Nota da segunda prova: " << aluno[0].np2 << endl;
    cout << "Media: " << media << endl; 
    
    
    
    return 0;
}

