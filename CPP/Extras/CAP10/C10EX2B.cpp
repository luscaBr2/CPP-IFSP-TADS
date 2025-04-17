/*
2B) Elaborar um programa de computador que calcule e apresente o valor do
somatório dos N primeiros números inteiros, definidos por um
operador (1+2+3+4+5+6+7+ ... +N). */

#include <iostream>

using namespace std;

int64_t somatorio(uint16_t n)
{
    uint64_t somatorio = 0;
    uint16_t i = 1;

    for(uint16_t i = 1; i <= n; i++)
        somatorio += i;

    return somatorio;
}

int main(void)
{
    uint16_t n;
    cout << "Insira o valor de N: ";
    cin >> n;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "O somatorio dos " << n << " primeiros numeros inteiros = " << somatorio(n) << endl;
    cout << endl;

    cout << "Pressione ENTER para encerrar" << endl;
    cin.get();
    return 0;
}

