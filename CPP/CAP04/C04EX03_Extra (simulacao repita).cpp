// C04EX3_Extra.cpp
// exemplo de simulação e REPITA/ATÉ_QUE

#include <iostream>
#include <cctype> // para usar o toupper()

using namespace std;

int main(void)
{
    uint16_t n, i;
    uint16_t fat;
    char resp ('S');

    while(toupper(resp) == 'S')
    {
        cout << "Programa fatorial" << endl << endl;
        cout << "Fatorial de que valor: "; cin >> n;
        cin.ignore(80, '\n');

        i = 1;
        fat = 1;

        do
        {
            fat *= i;
            ++i;
        } while (not (i > n)); // quando se altera o "mecanismo" tem que adaptar de modo que não fique uma gambiarra

        cout << endl;
        cout << "Fatorial de " << n << " = " << fat << endl;
        cout << endl;

        cout << "Deseja continuar?" << endl;
        cout << "[Tecle S para SIM | outra letra para NAO]: " << endl;
        cin.get(resp);
        cin.ignore();

        cout << endl;
    }

    cout << "Tecle ENTER para encerrar";
    cin.get();

    return 0;
}
