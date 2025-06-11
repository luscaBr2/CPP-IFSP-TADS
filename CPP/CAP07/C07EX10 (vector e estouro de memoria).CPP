// C07EX10.CPP

#include <iostream>
#include <iomanip>
#include <vector>
#include <exception> // permite usar o try-catch

using namespace std;

int main(void)
{
  vector<int32_t> matriz;
  int32_t valor;

  try { // "try" é usado para tratar erros, caso dê erro dentro do bloco do try, cairá no catch e nesse caso var apresentar o erro na tela
    do {
      cout << "MATRIZ[";
      cout << setw(2) << matriz.size() + 1 << "] ";
      cout << "(0 para encerrar) = ";
      cin >> valor;
      cin.ignore(80, '\n');

      if (valor != 0)
        matriz.push_back(valor); // push serve para adicionar valor na matriz, seria "empurrar" o valor para a matriz

    } while (valor != 0);

    cout << endl;
    cout << "Os valores informados sao:" << endl << endl;

    for (size_t i = 0; i < matriz.size(); ++i) {
      cout << "MATRIZ[" << setw(2) << i + 1 << "] = ";
      cout << setw(3) << matriz[i] << endl;
    }

  }
  // esse catch serve justamente para quando der ruim dentro do bloco do try, é possível ter vários catchs para vários tipos de erro
  catch (const bad_alloc &e) { // o erro a ser tratado nesse caso é o bad_alloc, ou seja, má alocação de memória
    cerr << "*** Memoria insuficiente: "; // cerr serve justamente para erros, é possível usar cout mas tem uma limitação no buffer
    cerr << e.what() << " ***" << endl;
  }

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

