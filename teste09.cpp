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
            cout << "Operacao de soma identificada" << endl;
            cout << num1 << " + " << num2 << " = " << result;
            break;
        case '-':
            result = num1 - num2;
            cout << "Operacao de subtração identificada" << endl;
            cout << num1 << " - " << num2 << " = " << result;
            break;
        case '*':
            result = (float)num1 * num2;
            cout << "Operacao de multiplicação identificada" << endl;
            cout << num1 << " * " << num2 << " = " << result;
            break;
        case '/':
            result = (float)num1 / num2;
            cout << "Operacao de divisão identificada" << endl;
            cout << num1 << " / " << num2 << " = " << result;
            break;
        default:
            cout << "Operacao não suportada";
            break;
    }
cin >> num1;
    return 0;
}