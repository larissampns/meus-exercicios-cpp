#include <iostream>
#include <iomanip>
using namespace std;
struct dados
{
    int matricula;
    float nota1;
    float nota2;
};
int main()
{
    //declaracao de variaveis
    dados registros;
    
    //entrada de dados
    cin >> registros.matricula >> registros.nota1 >> registros.nota2;
    
    //saida de dados
    cout << fixed << setprecision(2);
    cout << "Matricula do aluno: " << registros.matricula << endl;
    cout << "Nota da primeira prova: " << registros.nota1 << endl;
    cout << "Nota da segunda prova: " << registros.nota2 << endl;
    return 0;
}
