/*
Elaborar um programa que leia três valores (A, B e C) e apresente como resultado final a soma
dos quadrados dos três valores lidos
*/

#include <iostream>
#include <cmath>

using namespace std;

uint64_t somaQuadrados(int a, int b, int c)
{
    return pow(a, 2) + pow(b, 2) + pow(c, 2);
}

int main(void)
{
    int a, b, c;

    cout << "Insira o valor <A>: ";
    cin >> a;
    cin.ignore(80, '\n');

    cout << "Insira o valor <B>: ";
    cin >> b;
    cin.ignore(80, '\n');

    cout << "Insira o valor <C>: ";
    cin >> c;
    cin.ignore(80, '\n');

    cout << "A soma dos quadrados dos tres valores = " << somaQuadrados(a,b,c) << endl;

    cout << "Pressione ENTER para encerrar" << endl;
    cin.get();
    return 0;
}
