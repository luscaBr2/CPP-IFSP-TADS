// C06EX15.CPP

#include <iostream>

using namespace std;

int32_t soma(int32_t a, int32_t b)
{
  return a + b;
}

int32_t subtracao(int32_t a, int32_t b)
{
  return a - b;
}

/*
recebe como parametro o ponteiro de uma fun��o como parametro e usa para mudar seu
proprio comportamento, ent�o se a fun��o operacao recebe como parametro "soma", ele pega o caminho da
fun��o soma e assume a forma da fun��o
*/
int32_t operacao(
  int32_t (*funcao)(int32_t, int32_t), // pega o caminho da fun��o que recebeu
  int32_t a,
  int32_t b)
{
  return funcao(a, b);
}

int main(void)
{

  int32_t resultado1 = operacao(soma, 5, 2);
  int32_t resultado2 = operacao(subtracao, 5, 2);

  cout << "Resultado soma .......: " << resultado1 << endl;
  cout << "Resultado subtracao ..: " << resultado2 << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
