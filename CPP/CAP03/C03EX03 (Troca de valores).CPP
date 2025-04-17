// C03EX03.cpp

// Ordenar 2 valores em ordem crescente (troca de valores)

#include <iostream>;

using namespace std;

int main(void)
{
    int32_t a, b, x;

    cout << "Entre com o primeiro valor .: "; cin >> a;
    cin.ignore(80, '\n');

    cout << "Entre com o segundo valor ..: "; cin >> b;
    cin.ignore(80, '\n');

    cout << "\n";

    if(a > b)
    {
        x = a;
        a = b;
        b = x;
    }

    cout << "Valores ordenados = " << a << " e " << b << endl << endl;

    cout << "Pressione ENTER para encerrar o programa...";
    cin.get();

    return 0;
}
