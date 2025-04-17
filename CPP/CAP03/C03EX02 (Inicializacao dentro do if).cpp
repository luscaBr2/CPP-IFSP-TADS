// C03EX02.cpp

#include <iostream>

using namespace std;

int main(void)
{
    int32_t a, b;

    cout << "Entre com o valor <A>: "; cin >> a;
    cin.ignore(80, '\n');

    cout << "Entre com o valor <B>: "; cin >> b;
    cin.ignore(80, '\n');

    cout << '\n';

    // o R é inicializado dentro do if e é excluído após o IF acabar
    if (int32_t r = a + b; r > 10)
        cout << "Resultado = " << r << endl << endl;

    cout << "Tecle ENTER para encerrar...";
    cin.get();

    return 0;
}
