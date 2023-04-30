#include <iostream>

using namespace std;

int main(){

    char a = 'L';
    char b = 'u';
    char c = 'c';
    char d = 'a';
    char e = 's';

    int resultado = (int)a + b + c + d + e; //soma os caracters segundo a tabela ASC
    cout << resultado << endl;
    resultado = -resultado; //o sinal negativo (-) antes de um numero inverte o sinal
    cout << resultado << endl;
    resultado = -resultado;
    cout << resultado << endl;
    return 0;

}