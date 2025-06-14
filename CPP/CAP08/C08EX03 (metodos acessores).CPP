// C08EX03.CPP

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

class Aluno
{
  private: // privado, ou seja, apenas essa classe e quem a instancia pode acessar esses campos
    string nome;
    vector<float> nota;
    float media;

  public:
    Aluno() : nota(4) {}
    void PoeNome(string nome);
    string PegaNome(void) const;
    void PoeNota(char NT[6], int32_t pos);
    float PegaNota(int32_t pos) const;
    void PoeMedia(void);
    float PegaMedia(void) const;
};
// void pois n�o retorna nada, apenas coloca, ou seja, � um procedimento
void Aluno::PoeNome(string nome)
{
  this->nome = nome;
}
// � uma fun��o, pois retorna valor
string Aluno::PegaNome(void) const
{
  return nome;
}

void Aluno::PoeNota(char NT[6], int32_t pos)
{
  nota[pos] = atof(NT);
}

float Aluno::PegaNota(int32_t pos) const
{
  return nota[pos];
}

void Aluno::PoeMedia(void)
{
  media = 0;
  for (float n : nota)
    media += n;
  media /= nota.size();
}

float Aluno::PegaMedia(void) const
{
  return media;
}

int main(void)
{
  cout << setprecision(2) << fixed;

  Aluno aluno;
  string nome;
  char entranota[6];

  cout << "Cadastro de aluno" << endl;
  cout << endl;

  cout << "Informe o nome.....: ";
  getline(cin, nome);
  aluno.PoeNome(nome);
  cout << endl;

  cout << "Informe as notas:" << endl;
  cout << endl;
  for (size_t i = 0; i <= 3; ++i)
  {
    cout << i + 1 << "a. nota...........: ";
    cin.getline(entranota, sizeof(entranota));
    aluno.PoeNota(entranota, i);
  }
  cout << endl;

  aluno.PoeMedia();

  cout << endl;
  cout << "Relatorio" << endl;
  cout << endl;
  cout << "Nome..........: " << aluno.PegaNome() << endl;
  cout << endl;
  for (size_t i = 0; i <= 3; ++i)
  {
    cout << i + 1 << "a. nota......: ";
    cout << setw(5) << aluno.PegaNota(i) << endl;
  }
  cout << endl;

  cout << "Media.........: " << setw(5) << aluno.PegaMedia();
  cout << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
