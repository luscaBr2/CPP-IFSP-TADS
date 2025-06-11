// C06EX13.CPP

#include <iostream>

using namespace std;

int main(void)
{

  const int32_t x = 10;

  const int32_t *px = &x;

  // Tentativa de modificar o valor da constante
  // resulta em erro de compilação
  // *px = 20; // Erro!

  cout << "Valor da constante x ...: " << x << endl;
  cout << "Valor apontado por px ..: " << *px << endl;

  int32_t y = 5;

  int32_t *const py = &y; // modo de deixar apenas o ponteiro constante, assim sendo impossível mudar o
                          // caminho guardado pelo ponteiro (exemplo: py = &x; dará erro)

  *py = 15;

  cout << "Valor da variavel y ....: " << y << endl;
  cout << "Valor apontado por py ..: " << *py << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
