// operadores condicionais e operadores de comparação
// == igual, > maior, < menor, >= igual, <= menor ou igual
// != desigualdade ou diferente de de...
//Operações condicionais aninhadas
#include <iostream>

using namespace std;

int main()
{
    int dinheiro = 20;
    string nome = "Lucas";

    if (dinheiro > 10)
    {
        if(nome != ""){
            cout << nome << endl;
        }
        cout << "Eu vou ao cinema!";
    }
    else
    {
        cout << "Eu não vou ao cinema!";
    }

    return 0;
}