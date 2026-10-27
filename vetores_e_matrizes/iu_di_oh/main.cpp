#include <iostream>

using namespace std;
int main() {
  int n_atributos, n_cmt, n_clt, cm, lm, s;
  int cartas_m[100][100];
  int cartas_l[100][100];

  while (cin >> n_atributos) {
    cin >> n_cmt >> n_clt;

    for (int i = 0; i < (n_cmt); i++) {
      for (int j = 0; j < n_atributos; j++) {
        cin >> cartas_m[i][j];
      }
    }

    for (int i = 0; i < (n_clt); i++) {
      for (int j = 0; j < n_atributos; j++) {
        cin >> cartas_l[i][j];
      }
    }

    cin >> cm >> lm >> s;

    if (cartas_m[cm - 1][s - 1] > cartas_l[lm - 1][s - 1]) {
      cout << "Marcos" << endl;
    } else if (cartas_m[cm - 1][s - 1] < cartas_l[lm - 1][s - 1]) {
      cout << "Leonardo" << endl;
    } else {
      cout << "Empate" << endl;
    }
  }
}
