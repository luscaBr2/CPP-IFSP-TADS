//C02EX23.cpp

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
    println("Combinado .: {:*<+10.2f}, {:+#09X}", 3.14159, 10);
    println("Valores ...: {}, {}", 10'000., 100'000.);

    /* SAIDA

    Combinado .: +3.14*****, +0X00000A
    Valores ...: 10000, 100000

    */

    println("");
    print("Tecle ENTER para encerrar...");
    cin.get();

    return 0;
}
