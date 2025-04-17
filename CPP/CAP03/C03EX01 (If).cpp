//C03EX01.cpp
// SE (CONDICAO) ENTÃO

// se o resultado for maior que 10, apresente-o

#include <iostream>

using namespace std;

int main(void)
{
    int32_t a,b, r;

    cout << "Entre o valor de <A>: "; cin >> a;
    cin.ignore(80, '\n');

    cout << "Entre o valor de <B>: "; cin >> b;
    cin.ignore(80, '\n');

    cout << "\n";

    r = a + b;

    if (r > 10)
        cout << "Resultado = " << r << endl << endl;

    cout << "Tecle ENTER para encerrar...";
    cin.get();

    return 0;
}
