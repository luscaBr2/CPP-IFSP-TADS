// CO2EX13.CPP

#include <iostream>

using namespace std;

int main(void)
{
    // automatic
    // se usa auto quando não se sabe o tipo de dado que será usada
    auto numero = 42;
    auto pi = 3.141592;

    cout << "O tipo de dado de <numero>: " << typeid(numero) << endl;
    cout << "O tipo de dados <pi>: " << typeid(pi) << endl;

    return 0;
}
