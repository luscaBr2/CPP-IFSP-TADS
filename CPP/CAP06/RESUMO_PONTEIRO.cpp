#include <iostream>

using namespace std;

int main(void)
{
    // resumo de uso de ponteiros

    int x = 10;
    int *px = &x;

    cout << "X  = " << x  << endl; // retorna o valor de x
    cout << "PX = " << px << endl; // retorna o valor dentro do ponteiro (o caminho de x na memoria)
    cout << "&PX = " << &x << endl; // retorna o caminho de x na memoria
    cout << "*PX = " << *px << endl; // retorna o conteudo de x

    // ponteiro genérico
    int32_t a = 1;
    float b = 2.5;

    void *pg = nullptr;

    pg = &a;                      //          v Esse asterisco de dentro indica que esse é um casting de um ponteiro
    cout << "Valor inteiro ...: " << *(int32_t*)pg << endl;
    cout << "Valor de PG .....: " << pg << endl;

    pg = &b;
    cout << "Valor real ......: " << *(float*)pg << endl;
    cout << "Valor de PG .....: " << pg << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar... ";
    cin.get();
    return 0;
}
