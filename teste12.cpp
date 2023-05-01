// estrutura de repetição
// com multiplos argumentos

// Calcular fatorial

// !5 = 5 * 4 * 3 * 2 * 1 = 12
#include <iostream>

using namespace std;

int main()
{

    int num = 0, fatorar = 1, result = 1;

    cout << "Digite um numero para fatorar - ";
    cin >> num;

    for (int i = 1; i < num; i++)
    {
        result = result * i;
    }
    cout << "Fatorar " << result << endl;

    // for(int i; i <= 100; i++){
    //     cout << "ID: " << i << endl;
    // }

    // for(int i, a; i <= 100; i++, a * i){
    //     cout << "ID: " << i << endl;
    //     cout << "ID: " << a << endl;
    // }

    return 0;
}