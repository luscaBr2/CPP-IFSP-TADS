// C09EX03.CPP

#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
  char caractere;
  ifstream arqtxt("EXEMPLO1.TXT", ios::in); // ios::in serve para ler o arquivo selecionado

  if (not arqtxt) {
    cerr << "Erro ao abrir o arquivo." << endl;
    return 1;
  }

  while ((caractere = arqtxt.get()) != EOF) // EOF = END OF FILE = fim do arquivo
    cout.put(caractere);

  arqtxt.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
