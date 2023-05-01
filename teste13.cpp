//Trabalhando com funções
#include <iostream>

using namespace std;

bool par (int num){
    if(num % 2 == 0)
        return true;
    return false;
}

void msg(string t); //declarando apenas o prototico da função para criar depois

int main(){

    int n;
    msg("Aprendendo C++!");
    cout << "Digite um numero: ";
    cin >> n;
    if(par(n))
        cout << "O numero " << n << " eh par";
    else
        cout << "O numero " << n << " eh impar";
    

    return 0;

}

void msg(string t){
    cout << "--------------------------------------" << endl;
    cout << t << endl;
    cout << "--------------------------------------" << endl;
}