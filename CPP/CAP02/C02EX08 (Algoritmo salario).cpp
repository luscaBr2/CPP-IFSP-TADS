//C02EX08.CPP

#include <iostream>

using namespace std;

int main(void)
{
    float ht, vh, pd, td, sb, sl;

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
    cout << "Salario bruto..: " << sb << endl;
    cout << "Desconto.......: " << td << endl;
    cout << "Salario liquido: " << sl << endl;

    // SAÍDA
    // Salario bruto..: 129.125
    // Desconto.......: 8.39312
    // Salario liquido: 120.732

    //                  1234567
    // Por padrão o C++ deixa a visualização com 7 algarismos

    cout << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}
