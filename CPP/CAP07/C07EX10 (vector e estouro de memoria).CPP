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

  try { // "try" � usado para tratar erros, caso d� erro dentro do bloco do try, cair� no catch e nesse caso var apresentar o erro na tela
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
  // esse catch serve justamente para quando der ruim dentro do bloco do try, � poss�vel ter v�rios catchs para v�rios tipos de erro
  catch (const bad_alloc &e) { // o erro a ser tratado nesse caso � o bad_alloc, ou seja, m� aloca��o de mem�ria
    cerr << "*** Memoria insuficiente: "; // cerr serve justamente para erros, � poss�vel usar cout mas tem uma limita��o no buffer
    cerr << e.what() << " ***" << endl;
  }

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

