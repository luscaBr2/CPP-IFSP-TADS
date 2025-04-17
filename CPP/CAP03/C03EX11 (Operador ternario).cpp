// C03EX11.cpp

// OPERADOR TERNÁRIO, QUANDO SE FAZ O IF EM 1 LINHA

#include <iostream>

using namespace std;

int main(void)
{
    int32_t a, b, r;

    cout << "Entre o valor de <A>: "; cin >> a;
    cin.ignore(80, '\n');

    cout << "Entre o valor de <B>: "; cin >> b;
    cin.ignore(80, '\n');

    // se a > b, então receba A, se não, receba B
    r = (a > b) ? a : b;

    cout << "\nMaior valor informado: " << r << endl;

    cout << endl;

    cout << "Pressione ENTER para encerrar";
    cin.get();
    return 0;
}
