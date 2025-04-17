//C02EX20.cpp

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
    // asterisco serve para preencher os espaços em branco, pode ser qualquer outro caractere
    //
    println("Esquerda .....: {:*<8}", 10);
    println("Direita ......: {:*>8}", 10);
    println("Centralizado .: {:*^8}", 10);

    /*
    SAÍDA

    Esquerda ....: 10******
    Direita .....: ******10
    Centralizado.: ***10***

    */

    println("");
    println("Tecle ENTER para encerrar...");
    cin.get();

    return 0;
}
