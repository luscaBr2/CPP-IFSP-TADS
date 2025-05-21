// C07EX25.CPP

#include <iostream>

using namespace std;

// macro (definida com #define)
// muito parecido com função, mas não é uma função
// vantagem: é uma subrotina genérica, ou seja, não está preso a tipos de dados

//                           V condição ternária
#define menor_valor(v1, v2)((v1 < v2) ? (v1) : (v2)) // tem q ser escrito em uma unica linha, por isso são usados em situações menores

int main(void)
{

  int32_t a, b, resp;

  cout << "Entre o 1o. valor: "; cin >> a;
  cin.ignore(80, '\n');
  cout << "Entre o 2o. valor: "; cin >> b;
  cin.ignore(80, '\n');

  resp = menor_valor(a, b);

  cout << "Menor valor: " << resp << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

