//C02EX19.CPP

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
    println("Numeros: {}, {} e {}", 1, 3, 2); // as chaves sem numeros pegam os valores na sequencia que aparecem
    println("Numeros: {0}, {2} e {1}", 1, 3, 2); //as chaves com numeros dentro seguem a ordem crescente dos valores que aparece, nesse caso, {0} pega o primeiro valor, {2} o teceiro valor {1} o segundo valor

    println("");
    println("Tecle ENTER para encerrar...");
    cin.get();

    return 0;
}
