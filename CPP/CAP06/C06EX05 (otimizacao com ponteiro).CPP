// C06EX05.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int32_t a, *pa = &a;

  cout << "Entre um valor inteiro: ";
  cin >> *pa; // ao usar *pa, se aponta diretamente para o conte�do da var a
  cin.ignore(80, '\n');

  // Quando esse asterisco � usado no cout me retorna o conte�do da var a
  // quando se usa no cin, o valor inserido � enviado diretamente para o conte�do da var a via ponteiro

  /*
  essa a��o � muito recomendada, pois � como se n�o dependesse do compilador
  para usar a fun��o de atribui��o, � como se n�s mesmos pegassemos o conte�do e
  colocassemos diretamente onde desejamos "manualmente"
  */

  cout << "\nValor informado = " << a << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
