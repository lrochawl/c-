#include <iostream>

using namespace std;

int main (){

    bool result, par;
    int valor = 10;

    result = valor < 11;

    par     = (valor % 2) == 0;

    if(result){
        cout << "Numero menor que 11" << endl;
    }

    if(par){
        cout << "Numero par" << endl;
    }else{
        cout << "Numero impar" << endl;
    }

    if(!(valor == 0)){
        cout << "Numero diferente de zero";
    }

    return 0;
}