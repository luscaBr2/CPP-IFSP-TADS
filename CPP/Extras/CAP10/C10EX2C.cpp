/*
Escrever um programa que calcule e apresente a série de Fibonacci de N termos. A série de
Fibonacci é formada pela sequência 1, 1, 2, 3, 5, 8, 13, 21, 34 ... etc., a qual se caracteriza pela
soma de um termo posterior com o seu anterior subsequente. Apresentar o resultado.

*/

#include <iostream>

using namespace std;

int main(void)
{
    uint32_t limite;

    cout << "Entre com o valor do limite: ";
    cin >> limite;
    cin.ignore(80, '\n');

    cout << "Sequencia de Fibonacci com " << limite << " elementos" << endl;
    cout << endl;

    if (limite <= 0)
        cout << "Insira um valor maior que 0";

    if (limite == 1)
        cout << "0, 1";

    if (limite == 2)
        cout << "0, 1, 1";

    if (limite > 2)
    {
        uint32_t elemento1, elemento2= 1;

        // para incluir o n = 1
        cout << "0, 1, ";

        for(uint16_t i = 2; i <= limite; i++) // começa com 2 pois eu ja estou considerando o i = 1 no cout anterior
        {
            uint32_t proximo = elemento1 + elemento2;
            cout << proximo;

            // essa parte serve para que o ultimo elemento não fique com uma virgula perdida no fim da linha
            if (i == limite) // se o elemento atual for o ultimo, não coloque virgula, caso o contrário, coloque virgula
                cout << " ";
            else
                cout << ", ";

            // dar um passo pra frente
            elemento1 = elemento2; // o primeiro elemento atual vira o segundo antigo
            elemento2 = proximo;   // e o segundo elemento antigo vira o ultimo exibido
        }
    }

    cout << endl;
    cout << "Pressione ENTER para encerrar" << endl;
    cin.get();
    return 0;
}
