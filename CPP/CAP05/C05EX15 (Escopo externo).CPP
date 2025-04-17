// C05EX15.CPP

#include <iostream>

using namespace std;

// o extern indica que a var ou procedimento/função será buscada fora desse arquivo
extern int16_t a;
extern int16_t b;

extern void adicao(void);

// comando para compilar no CMD do windows
// cd C:\Users\cj3032116\Desktop\IFSP-TADS\CPP\CAP05
// clang++ -std=c++23 C05EX14.CPP C05EX15.CPP -o TESTE2

int main(void)
{

  cout << "Entre o 1o. numero: ";
  cin >> a;
  cin.ignore(80, '\n');

  cout << "Entre o 2o. numero: ";
  cin >> b;
  cin.ignore(80, '\n');

  adicao();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;

}
