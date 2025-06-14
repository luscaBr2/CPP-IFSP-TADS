// C09EX13.CPP

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void pausa(void) {
  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
}

int main(void)
{
  uint64_t tamanho;
  char* numeroCaracteres = reinterpret_cast<char*>(&tamanho);
  ifstream arqbin("EXEMPLO6.BIN", ios::binary);
  if (not arqbin) {
    cerr << "Erro ao abrir o arquivo." << endl;
    pausa();
    return 1;
  }

  // L� do arquivo enquanto n�o chegar ao final
  while (arqbin.read(numeroCaracteres, sizeof(tamanho))) {
    // Aloca um byte extra para o terminador nulo
    vector<char> mensagem(tamanho + 1);
    // L� a mensagem
    arqbin.read(mensagem.data(), tamanho);
    mensagem[tamanho] = '\0'; // Termina a string com nulo
    cout << "Mensagem: " << mensagem.data() << endl;
  }

  arqbin.close();
  pausa();
  return 0;
}
