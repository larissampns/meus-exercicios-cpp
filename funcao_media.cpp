#include <iostream>
#include <iomanip>
using namespace std;
float calc_md (int notas[], int n)
{
    float soma=0; //soma para a media
    for(int i = 0; i < n; i++)
    {
        soma = soma + notas[i];
    }
    return soma/n;
}
int main()
{
    int n; //numero de alunos do prof assustador
    int notas[100]; //vetor que armazena as notas
    float soma=0; //soma para a media
    float mediaTurma; //media das notas
    int i;
    
    cin >> n; //entra com n notas 
    while (n <= 0 || n > 100) //verificacao 
    {
        cin >> n;
    }
    for (i=0; i < n; i++)
    {
        cin >> notas[i];
        mediaTurma = calc_md(notas,n);
    }
    cout << fixed << setprecision(2);
    cout << "Media da turma = " << mediaTurma << endl;
    
    return 0;
}
