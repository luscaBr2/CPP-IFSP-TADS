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

  // size_t é inteiro, positivo, usado para indices de matrizes, pega o tamanho máximo que a máquina gerencie
  // é falso de que size_t é equivalente ao primitivo unsigned int, ambos contemplam os mesmos dados mas são diferentes
  for (size_t i = 0; i <= 7; ++i) {
    cout << "Informe a " << i + 1 << "a. nota: "; // esse +1 serve justamente para humanizar a saída, de modo que o primeiro seja o 1 e não o 0
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
