#include <iostream> 
using namespace std;
struct dados
{
    string nome;
    int n1;
    int n2;
    int n3;
    int n4; 
};
int strongest(dados atletas[], int nAtletas)
{
    int soma = 0;
    int maior=0;
    int posicaoMaior = 0;
    for (int i =0; i<nAtletas; i++)
    {
        soma =  atletas[i].n1 + atletas[i].n2 + atletas[i].n3 + atletas[i].n4;
        if (soma > maior )
        {
            maior = soma;
            posicaoMaior = i;
        }
        
    }
    return posicaoMaior;
}
int main()
{
    int nAtletas; //numero de atletas inscritos 
    dados atleta[1000]; //vetor que armazena os dados dos atletas
    int vencedor; 
    int i; //variavel de controle do for
    
    cin >> nAtletas; //entra com o numero de atleta incrito
    
    //leitura de dados
    for (i = 0; i < nAtletas; i++)
    {
        //entrada dos vetores structs
        
        getline(cin>>ws,atleta[i].nome);
        cin >> atleta[i].n1 >> atleta[i].n2 >> atleta[i].n3 >> atleta[i].n4;
    }
    
    vencedor = strongest(atleta, nAtletas);//chama a funcao
    
    
    cout << "Vencedor: " <<atleta[vencedor].nome << endl;
    return 0;
}
