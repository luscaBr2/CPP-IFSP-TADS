// C06EX01.cpp

#include <iostream>

using namespace std;

int main(void)
{
    int16_t idade = 25;
    int16_t *pidade = nullptr; // ponteiro, ainda não apontando pra ninguem

    pidade = &idade; // o & ("E" comercial) retorna o endereço da variável (exemplo: 000000DFED2FFC0E)

    /*
    Quando usamos o int16_t no idade, indicamos que ele tem 16 bits na memória,
    então o ponteiro tem que seguir esse mesmo tamanho, para que ele armazene o caminho completo,
    do bit 0 até o 15

    então se declasassemos o ponteiro como 64 bits e a variavel de 16, ele armazenaria os 16 e mais 32 pra frente.

    Ou se a variavel fosse de 64 e o ponteiro de 16, o ponteiro não armazenaria o endereço todo

    */

    // o endereço muda a cada nova inicialização da variavel
    cout << "A idade " << idade << " esta armazenada no endereco " << pidade << " da memoria RAM" << endl;

    cout << "Pressione ENTER para encerrar";
    cin.get();
    return 0;
}
