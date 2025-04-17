//C02EX21.cpp

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
    println("Zeros a esquerda ..: {:08}, {:08}", 10, -2);
    println("Espacos em branco .: {:8d}", 10);
    println("Sem espacos .......: {:d}", 10);

    /* SAIDA

    Zeros a esquerda ..: 00000010, -0000002
    Espacos em branco .:       10
    Sem espacos .......: 10

    */

    println("");
    print("Tecle ENTER para encerrar...");
    cin.get();

    return 0;
}
