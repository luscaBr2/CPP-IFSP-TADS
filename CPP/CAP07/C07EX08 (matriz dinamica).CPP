// C07EX08.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  size_t tamanho;
  float *pmatriz; //� um ponteiro para um dado do tipo float
  // n�o � poss�vel criar matrizes dinamicas com variaveis comuns, apenas ponteiros

  cout << setprecision(2) << fixed;

  cout << "Entre a quantidade de elementos: ";
  cin >> tamanho;
  cin.ignore(80, '\n');

  pmatriz = new float[tamanho];

  cout << endl;
  for (size_t i = 0; i <= tamanho - 1; ++i) {
    cout << "Entre um valor para a variavel MATRIZ[";
    cout << i + 1 << "] = ";
    cin >> pmatriz[i];
    cin.ignore(80, '\n');
  }
  cout << endl;

  cout << "Os valores informados sao:" << endl;
  cout << endl;
  for (size_t i = 0 ; i <= tamanho - 1; ++i) {
     cout << "MATRIZ[" << i + 1 << "] = ";
     cout << setw(4) << pmatriz[i] << endl;
  }

  delete [] pmatriz; // remove a area usada da mem�ria, pois n�o � uma �rea que o compilador administre

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

