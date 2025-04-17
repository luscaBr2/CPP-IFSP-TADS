//C04EX07.cpp
//laço decrescente

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    for (uint16_t i = 1; i <= 20; i += 2) // ou ++++i mas fica muito feio
        cout << "i = " << setw(2) << i << endl;

    cout << endl;
    cout << "Pressione ENTER para encerrar" << endl;
    cin.get();

    return 0;
}
