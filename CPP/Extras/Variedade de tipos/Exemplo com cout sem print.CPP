// C02EX17x.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  int16_t valor = 10;

  cout << "Valor decimal .................: " << valor << endl;
  cout << "Valor binario .................: " << bitset<16>(valor) << endl;
  cout << "Valor octal ...................: " << oct << valor << endl;
  cout << "Valor hexadecimal (minusculo) .: " << hex << valor << endl;
  cout << "Valor hexadecimal (maiusculo) .: " << uppercase << hex << valor << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();

  return 0;
}
