//C02EX22.cpp

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
    println("Positivo com sinal ....: {:+}", 10);
    println("Com espacos em branco .: {: }", 10);

    println("");
    print("Tecle ENTER para encerrar...");
    cin.get();

    return 0;
}
