// C06EX05.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int32_t a, *pa = &a;

  cout << "Entre um valor inteiro: ";
  cin >> *pa; // ao usar *pa, se aponta diretamente para o conteúdo da var a
  cin.ignore(80, '\n');

  // Quando esse asterisco é usado no cout me retorna o conteúdo da var a
  // quando se usa no cin, o valor inserido é enviado diretamente para o conteúdo da var a via ponteiro

  /*
  essa ação é muito recomendada, pois é como se não dependesse do compilador
  para usar a função de atribuição, é como se nós mesmos pegassemos o conteúdo e
  colocassemos diretamente onde desejamos "manualmente"
  */

  cout << "\nValor informado = " << a << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
