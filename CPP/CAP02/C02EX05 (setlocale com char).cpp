//C02EX05.cpp

#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

int main(void)
{
    char nome[50];

    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    SetConsoleCP(1252);

    cout << "Olá,\nQual é seu nome? ";
    cin.getline(nome, 50);

    cout << endl;
    cout << "Oi " << nome << ", vamos estudar." << endl;
    cout << endl;

    cout << "Tecla <ENTER> para encerrar...";
    cin.get();

    return 0;
}
