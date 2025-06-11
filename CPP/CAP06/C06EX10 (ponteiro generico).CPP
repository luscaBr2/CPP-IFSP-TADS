// C06EX10.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int32_t a = 1;
  float b = 2.5;

  /*
  pg é um ponteiro genérico, de modo que ele pode ser o ponteiro de qualquer variavel
  isso é bom, mas tem um custo, o custo é ter que dizer qual o tamanho da variavel
  manualmente ao usar o ponteiro

  a diferença de um ponteiro genérico para um normal é que ele é declarado com void,
  porém o custo é ter que colocar o tipo da variável que deseja alocar ele como ponteiro
    */
  void *pg = nullptr;

  pg = &a;                      //          v Esse asterisco de dentro indica que esse é um casting de um ponteiro
  cout << "Valor inteiro ...: " << *(int32_t*)pg << endl;
  cout << "Valor de PG .....: " << pg << endl;

  pg = &b;
  cout << "Valor real ......: " << *(float*)pg << endl;
  cout << "Valor de PG .....: " << pg << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
