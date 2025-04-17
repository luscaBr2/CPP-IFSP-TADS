// MEUSPC.H (suporte para C05EX21)
// Arquivo de cabecalho para namespace
// que se guardam constantes, ?, protótipos e namespaces

#include <iostream>

using namespace std;

#ifndef __MEUSPC_H // se não estiver definida __MEUSPC_H
#define __MEUSPC_H // então defina

// isso serve para evitar que o máquina use várias vezes o mesmo namespace, inflando a memória
// então se ja estiver definido

namespace testespc
{
   void subTeste(void)
   {
      cout << "Teste no meuspc." << endl;
      cout << endl;
      cout << "Tecle <Enter> para encerrar... ";
      cin.get();
   }
}

#endif // __MEUSPC_H
