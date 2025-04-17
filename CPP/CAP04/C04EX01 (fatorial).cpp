// C04EX01.cpp

#include <iostream>

using namespace std;

int main(void)
{
    // u vem de unsigned, ou seja, sem sinal, todos os numeros positivos
    uint16_t n, i = 1;
    uint16_t fat (1); // fat ja inicia com 1, então tem como atribuir assim

    cout << "Programa fatorial" << endl << endl;
    cout << "Fatorial de que valor: "; cin >> n;
    cin.ignore(80, '\n');

    while (i <= n)
    {
        fat *= i; // fat = fat * i
        ++i;
    }

    cout << endl;
    cout << "Fatorial de " << n << " = " << fat << endl;
    cout << endl;

    cout << "Tecle ENTER para encerrar";
    cin.get();

    return 0;
}
