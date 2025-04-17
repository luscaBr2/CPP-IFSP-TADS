// C03EX12.cpp


#include <iostream>
#include <compare>

using namespace std;

int main(void)
{
    int32_t num1, num2;
    auto resultado (strong_ordering::equal); //strong_ordering = ordenação segura

    cout << "Informe primeiro numero ..:";
    cin >> num1;
    cin.ignore(80, '\n');

    cout << "Informe segundo numero ...:";
    cin >> num2;
    cin.ignore(80, '\n');

    // OPERADOR "SPACESHIP" <=> (menor, igual ou maior) [ou em portugês "três vias"]
    // retorna -1 caso num1 seja menor que num2
    // retorna 0 caso sejam iguais
    // retorna +1 caso num1 seja maior que num2

    resultado = num1 <=> num2;

    if (resultado < 0)
        cout << num1 << "menor que " << num2 << endl;
    else if (resultado == 0)
        cout << num1 << " igual a " << num2 << endl;
    else
        cout << num1 << " maior que " << num2 << endl;
    cout << endl;

    cout << "Pressione ENTER para encerrar";
    cin.get();
    return 0;

}
