//operadores aritméticos
#include <iostream>

using namespace std;

int main(){

    int n1, n2;
    float resultado;
    n1 = 10; 
    n2 = 20;
    resultado = (float)n1 / n2;
    cout  << resultado << endl;
    n1++; //n1 = n1 + 1 ou n1 += 1
    cout << n1 << endl;
    n1 *= 5;
    cout << n1 << endl;
    return 0;
}