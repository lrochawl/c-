//calculadora
#include <iostream>

using namespace std;

int main(){

    int num1, num2, result;
    char op;

    cout << "Digite o primeiro numero" << endl;
    cin >> num1;
    cout << "Digite o segundo numero" << endl;
    cin >> num2;
    cout << "Digite a operacao" << endl;
    cin >> op;
    cout << "**********************************" << endl;

    switch (op){
        case '+':
            result = num1 + num2;
            cout << "Operação de soma identificada" << endl;
            cout << num1 << " + " << num2 << " = " << result;
            break;
        case '-':
            result = num1 - num2;
            cout << "Operação de subtração identificada" << endl;
            cout << num1 << " - " << num2 << " = " << result;
            break;
        case '*':
            result = num1 * num2;
            cout << "Operação de multiplicação identificada" << endl;
            cout << num1 << " * " << num2 << " = " << result;
            break;
        case '/':
            result = num1 * num2;
            cout << "Operação de divisão identificada" << endl;
            cout << num1 << " / " << num2 << " = " << result;
            break;
        default:
            cout << "Operação não suportada";
    }

    return 0;
}