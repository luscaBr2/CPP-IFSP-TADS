// C06EX01.cpp

#include <iostream>

using namespace std;

int main(void)
{
    int16_t idade = 25;
    int16_t *pidade = nullptr; // ponteiro, ainda n�o apontando pra ninguem

    pidade = &idade; // o & ("E" comercial) retorna o endere�o da vari�vel (exemplo: 000000DFED2FFC0E)

    /*
    Quando usamos o int16_t no idade, indicamos que ele tem 16 bits na mem�ria,
    ent�o o ponteiro tem que seguir esse mesmo tamanho, para que ele armazene o caminho completo,
    do bit 0 at� o 15

    ent�o se declasassemos o ponteiro como 64 bits e a variavel de 16, ele armazenaria os 16 e mais 32 pra frente.

    Ou se a variavel fosse de 64 e o ponteiro de 16, o ponteiro n�o armazenaria o endere�o todo

    */

    // o endere�o muda a cada nova inicializa��o da variavel
    cout << "A idade " << idade << " esta armazenada no endereco " << pidade << " da memoria RAM" << endl;

    cout << "Pressione ENTER para encerrar";
    cin.get();
    return 0;
}
