// C04EX09.cpp

#include <iostream>

using namespace std;

int main(void)
{
    float n;

    while (true)
    {
        cout << "Entre um valor numerico: ";

        // caso entre qualquer valor que n�o seja numerico, retornar� false
        // apenas sai do la�o while quando inserir um valor numerico
        if (cin >> n)
            break;
        else
        {
            cout << "Erro: entre apenas valor numerico" << endl;
            cin.clear();
            cin.ignore(10000, '\n'); // tira a mensagem de erro da variavel
        }
    }


    cout << endl;
    cout << "Pressione ENTER para encerrar";
    cin.get();
    return 0;
}
