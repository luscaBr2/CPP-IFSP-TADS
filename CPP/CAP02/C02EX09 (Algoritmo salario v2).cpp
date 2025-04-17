//C02EX09.CPP

#include <iostream>
#include <iomanip> // biblioteca para manipular a entrada e sa�da, ou seja, para permitir deixar a sa�da mais "humana"

using namespace std;

int main(void)
{
    float ht, vh, pd, td, sb, sl;

    cout << setprecision(2) << fixed << right; // editar para 2 casas decimais // o fixed fixa o ponto em uma posi��o apenas
    cout << "Entre a quantiadde de horas trabalhadas: ";
    cin >> ht;
    cin.ignore(80, '\n');

    cout << "Entre o valor da hora de trabalho......: ";
    cin >> vh;
    cin.ignore(80, '\n');

    cout << "Entre o valor do percentual de desconto: ";
    cin >> pd;
    cin.ignore(80, '\n');

    sb = ht * vh;
    td = (pd / 100) * sb;
    sl = sb - td;

    cout << "\n";
    cout << "Salario bruto..: " << setw(8) << sb << endl; // "<< setw(8)" significa set white 8, ou seja, colocar 8 espa�os brancos para o numero se distribuir
    cout << "Desconto.......: " << setw(8) << td << endl;
    cout << "Salario liquido: " << setw(8) << sl << endl;

    // SA�DA
    // Salario bruto..: 129.125
    // Desconto.......: 8.39312
    // Salario liquido: 120.732

    //                  1234567
    // Por padr�o o C++ deixa a visualiza��o com 7 algarismos

    cout << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
