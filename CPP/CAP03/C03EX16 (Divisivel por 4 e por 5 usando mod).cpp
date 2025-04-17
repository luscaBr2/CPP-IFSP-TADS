// C03EX16.cpp

// l� um numero e verifica se � divisivel por 4 e por 5 usando mod

#include <iostream>
#include <ciso646>

using namespace std;

int main(void)
{
    int32_t n, r4, r5;

    cout << "Entre um numero natural: "; cin >> n;
    cin.ignore(80, '\n');
    cout << endl;

    r4 = n % 4; // no diagrama de bloco, tem que ser escrito como n - 4 * (n / 4), por mais que no programa esteja usando mod
    r5 = n % 5; // o mesmo vale aqui, n - 5 * (n / 5)

    if(r4 == 0 and r5 ==0)
        cout << "Resultado = " << n << " e divisivel por 4 e 5" << endl;
    else
        cout << "Valor nao e divisivel por 4 e 5" << endl;

    cout << endl;

    cout << "Pressione ENTER para encerrar...";
    cin.get();

    return 0;
}
