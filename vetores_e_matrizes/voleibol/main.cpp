#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main(void) {
  string nome;
  int s = 0, b = 0, a = 0, s1 = 0, b1 = 0, a1 = 0, entries;

  cin >> entries;

  for (int i = 0; i < entries; i++) {
    int se, be, ae, s1e, b1e, a1e;
    cin >> nome >> se >> be >> ae >> s1e >> b1e >> a1e;

    s += se;
    b += be;
    a += ae;
    s1 += s1e;
    b1 += b1e;
    a1 += a1e;
  }

  cout << "Pontos de Saque: " << fixed << setprecision(2)
       << ((double)s1 / (double)s * 100.0f) << " %." << endl;
  cout << "Pontos de Bloqueio: " << fixed << setprecision(2)
       << ((double)b1 / (double)b * 100.0f) << " %." << endl;
  cout << "Pontos de Ataque: " << fixed << setprecision(2)
       << ((double)a1 / (double)a * 100.0f) << " %." << endl;

  return 0;
}
