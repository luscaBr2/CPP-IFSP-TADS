// C07EX01.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{

  float notas[8], soma = 0, media;

  cout << setprecision(2) << fixed;

  cout << "Calculo de media escolar" << endl;
  cout << endl;

  // size_t � inteiro, positivo, usado para indices de matrizes, pega o tamanho m�ximo que a m�quina gerencie
  // � falso de que size_t � equivalente ao primitivo unsigned int, ambos contemplam os mesmos dados mas s�o diferentes
  for (size_t i = 0; i <= 7; ++i) {
    cout << "Informe a " << i + 1 << "a. nota: "; // esse +1 serve justamente para humanizar a sa�da, de modo que o primeiro seja o 1 e n�o o 0
    cin >> notas[i];
    cin.ignore(80, '\n');
    soma += notas[i];
  }

  media = soma / 8;

  cout << endl;
  cout << "Media do grupo = " << setw(6) << media << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
