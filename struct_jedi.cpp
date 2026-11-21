#include <iostream>
using namespace std;
struct ficha
{
  string nome; //nome de cada cavaleiro
  int base; //base onde o cavaleiro esta alocado
};
int main()
{
    int n; //numero de cavaleiros a cadastrar 
    ficha jedi[1000];//vetor que armazena dados do jedi
    int i; //variavel de controle do for
    string nomeProcura; //nome do cavaleiro que se quer achar
    
    cin >> n;
    while (n<=0 || n>1000)
    {
        cin >> n;
    }
    for (i = 0; i < n; i++)
    {
        getline (cin >> ws, jedi[i].nome); //entra com o nome
        cin >> jedi[i].base; //entra com o numero da base
    }
    
    getline(cin >> ws,nomeProcura); //nome do cavaleiro que quer achar
    
    for (i = 0; i < n; i++) //achar o cavaleiro
    {
        if (nomeProcura == jedi[i].nome){
            cout << "Este cavaleiro esta base " << jedi[i].base << endl;
        return 0; //se achar acaba
        }
    }
    
    
    cout << "Este cavaleiro nao esta cadastrado" << endl; //nao achou
            
    return 0;
}
