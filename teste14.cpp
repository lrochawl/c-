//sobrecarga de funções
/// a assinatura das funções é composta pelo numero de argumentos e o tipo
// tipo de retorno não diferencia funções com mesmo nome e numero de argumentos
#include <iostream>

using namespace std;

void mensagem(int n){
    cout << "O numero informado foi " << n << endl;
}

void mensagem(){
    cout << "Funcao sem parametro" << endl;
}

int main(){

    mensagem(1);

    mensagem();

    return 0;
}