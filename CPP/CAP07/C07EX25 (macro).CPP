// C07EX25.CPP

#include <iostream>

using namespace std;

// macro (definida com #define)
// muito parecido com fun��o, mas n�o � uma fun��o
// vantagem: � uma subrotina gen�rica, ou seja, n�o est� preso a tipos de dados

//                           V condi��o tern�ria
#define menor_valor(v1, v2)((v1 < v2) ? (v1) : (v2)) // tem q ser escrito em uma unica linha, por isso s�o usados em situa��es menores

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

