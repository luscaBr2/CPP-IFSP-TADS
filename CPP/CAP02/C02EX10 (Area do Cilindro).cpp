//C02EX010.CPP

#include <iostream>
#include <cmath> //biblioteca matem�tica, o c++ n�o possui operador para exponencia��o e nem ra�zes, ent�o usamos essa biblioteca para n�o fazer o calculo manualmente
                 // TODAS as opera��es matem�ticas est�o presentes nessa biblioteca

using namespace std;

const float PI = 3.141592;

int main(void)
{
    float v, h, r;

    cout << "Entre a altura....: ";
    cin >> h;
    cin.ignore(80, '\n');

    cout << "Entre com o raio..: ";
    cin >> r;
    cin.ignore(80, '\n');

    v = h * PI * pow(r, 2);

    cout << "Area do cilindro..: " << v << endl;

    cout << endl; //serve para quebrar a linha
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;


}
