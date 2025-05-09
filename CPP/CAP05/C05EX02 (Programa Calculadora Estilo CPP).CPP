// C05EX02.CPP
// Programa Calculadora
// Estilo C++
// BOTTOM-UP

#include <iostream>
#include <iomanip>
using namespace std;

float r, a, b;

void pausa(void)
{
  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
}

// procedimento (pois n�o retorna nada)
void entrada(void)
{
  cout << "\n";
  cout << "Entre um valor para a variavel [A]: "; cin >> a;
  cin.ignore(80, '\n');
  cout << "Entre um valor para a variavel [B]: "; cin >> b;
  cin.ignore(80, '\n');
}

//fun��o (� uma fun��o pois retorna um valor, � isso que define uma fun��o)
float calculo(float a, float b, char operador)
{
  switch (operador)
  {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/': return a / b;
    default: return 0.0; // Valor de retorno padr�o
  }
}

void saida(void)
{
  cout << "\n";
  cout << "O resultado entre A e B = " << setw(8);
  cout << r << endl;
  pausa();
}

void rotadicao(void)
{
  cout << "\n";
  cout << "Rotina de Adicao" << endl;
  cout << "----------------" << endl;
  entrada();
  r = calculo(a, b, '+');
  saida();
}

void rotsubtracao(void)
{
  cout << "\n";
  cout << "Rotina de Subtracao" << endl;
  cout << "-------------------" << endl;
  entrada();
  r = calculo(a, b, '-');
  saida();
}

void rotmultiplicacao(void)
{
  cout << "\n";
  cout << "Rotina de Multiplicacao" << endl;
  cout << "-----------------------" << endl;
  entrada();
  r = calculo(a, b, '*');
  saida();
}

void rotdivisao(void)
{
  cout << "\n";
  cout << "Rotina de Divisao" << endl;
  cout << "-----------------" << endl;
  entrada();
  if (b == 0)
  {
    cout << "\n";
    cout << "Erro de divisao" << endl;
    pausa();
  }
  else
  {
    r = calculo(a, b, '/');
    saida();
  }
}

int main(void)
{
  uint16_t opcao = 0;
  while (opcao != 5)
  {
    cout << setprecision(2) << right << fixed;
    cout << "\n";
    cout << "--------------------" << endl;
    cout << "Programa Calculadora" << endl;
    cout << "   Menu Principal   " << endl;
    cout << "--------------------" << endl;
    cout << "\n";
    cout << "[1] - Adicao" << endl;
    cout << "[2] - Subtracao" << endl;
    cout << "[3] - Multiplicacao" << endl;
    cout << "[4] - Divisao" << endl;
    cout << "[5] - Fim de Programa" << endl;
    cout << "\n";
    cout << "Escolha uma opcao: "; cin >> opcao;
    cin.ignore(80, '\n');
    if (opcao != 5)
    {
      switch (opcao)
      {
        case 1: rotadicao();        break;
        case 2: rotsubtracao();     break;
        case 3: rotmultiplicacao(); break;
        case 4: rotdivisao();       break;
      }
    }
  }
  return 0;
}
