#include <iostream>
using namespace std;
float calc_maior (float vetA[], int N)
{
    float maior=vetA[0];
    int i;
    for (i=0; i<N; i++)
    {
       
        if (vetA[i]>maior){
            maior = vetA[i];
        }
    }
    return maior;
}
float calc_menor (float vetA[], int N)
{
    float menor=vetA[0];
    int i;
    for (i=0; i<N; i++)
    {
        
        if (vetA[i]<menor){
            menor = vetA[i];
        }
    }
    return menor;
}

int main()
{
    float vetA[100]; //vetor A
    int N; //numero de elementos do vetor A
    int i;// variavel de controle 
    float maior; //maior elemento do vetor
    float menor;//menor elemento do vetor
    
    
    cin >> N; //entra com N
    while (N <= 0 || N >= 100)//verificacao
    {
        cin >> N;
    }
    
    //leitura de dados
    for(i=0; i<N; i++)
    {
       cin >> vetA[i];//entra com os dados do vetor
    }
    //chama as funcoes
    maior = calc_maior(vetA, N);
    menor = calc_menor(vetA, N);
    
    //saida de dados
    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;
    return 0;
}
