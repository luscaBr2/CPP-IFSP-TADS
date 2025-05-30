// C09EX01.CPP

#include <iostream>
#include <fstream> // file stream = comunicação com arquivos

using namespace std;

int main(void)
{
  //ofstream = output file stream
  ofstream arqtxt("EXEMPLO1.TXT", ios::trunc); // ios::trunc serve para criar o arquivo no disco

  if (not arqtxt) {
    cerr << "Erro ao criar o arquivo." << endl;
    return 1; // return encerra o programa e entrega o valor como retorno, de modo que esse numero identifique o erro
  }

  cout << "Arquivo criado com sucesso." << endl;

  arqtxt.close(); // fecha o arquivo, pois quando um arquivo fica aberto, um 1 bit de sinalização fica habilitado para indicar essa abertura

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
