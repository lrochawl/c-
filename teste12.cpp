// estrutura de repetição
//com multiplos argumentos
#include <iostream>

using namespace std;

int main(){

    for(int i; i <= 100; i++){
        cout << "ID: " << i << endl;
    }
    
    for(int i, a; i <= 100; i++, a * i){
        cout << "ID: " << i << endl;
        cout << "ID: " << a << endl;
    }

    return 0;

}