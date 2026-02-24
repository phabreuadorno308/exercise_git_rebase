#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    cout << "Digite o primeiro numero: ";
    if (!(cin >> num1)) {
        cout << "Erro: entrada invalida para o primeiro numero." << endl;
        return 1;
    }

    cout << "Digite o segundo numero: ";
    if (!(cin >> num2)) {
        cout << "Erro: entrada invalida para o segundo numero." << endl;
        return 1;
    }

    // Verificação de segurança: divisão por zero
    if (num2 == 0) {
        cout << "Erro: divisao por zero nao permitida." << endl;
        return 1;
    }

    double resultado = num1 / num2;

    cout << "Resultado da divisao: " << resultado << endl;

    return 0;
}