// C06EX10.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int32_t a = 1;
  float b = 2.5;

  /*
  pg � um ponteiro gen�rico, de modo que ele pode ser o ponteiro de qualquer variavel
  isso � bom, mas tem um custo, o custo � ter que dizer qual o tamanho da variavel
  manualmente ao usar o ponteiro

  a diferen�a de um ponteiro gen�rico para um normal � que ele � declarado com void,
  por�m o custo � ter que colocar o tipo da vari�vel que deseja alocar ele como ponteiro
    */
  void *pg = nullptr;

  pg = &a;                      //          v Esse asterisco de dentro indica que esse � um casting de um ponteiro
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
