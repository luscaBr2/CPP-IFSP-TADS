//C02EX18.CPP

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
    double valor = 3.159;

    println("Valor com 2 casas decimais ...: {:7.2}", valor); // esse 7 � como o 7w, o . � fixed e o 2 � o numero de casas no <iostream>, o f � de float
    println("Valor em notacao cientifica ..: {:e} ", valor); //e minusculo aparece em minusculo, E maiusculo aparace em maiusculo

    println("");
    print("Tecle <ENTER> para encerrar...");
    cin.get();
}
