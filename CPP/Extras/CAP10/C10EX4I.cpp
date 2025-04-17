/*
Elaborar um programa que apresente o valor de uma temperatura em graus Celsius.
O programa deve ler a temperatura em graus Fahrenheit
*/

#include <iostream>

using namespace std;

int main(void)
{
    float fahrenheit;
    cout << "Entre o valor de uma temperatura em Fahrenheit: ";
    cin >> fahrenheit;
    cin.ignore(80, '\n');

    float celsius = (fahrenheit - 32) * 5 / 9;

    cout << fahrenheit << " graus fahrenheit = " << celsius << " graus celsius"<< endl;

    cout << "Pressione ENTER para encerrar" << endl;
    cin.get();
    return 0;
}
