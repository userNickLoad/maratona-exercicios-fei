
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int o;

  while (cin >> o) {
    if (o == 0) {
      break;
    }

    int center = ceil(o / 2);

    for (int i = 0; i < o; i++) {
      for (int j = 0; j < o; j++) {
        int distancia = 0, y = 0, x = 0;
        y = i;
        x = j;

        if (!(o & 0x1)) {
          if (y > o - 1) {
            y = y - o 1;
          }
          if (x > o - 1) {
            x = x - o 1;
          }
        }

        int disy = (o)-y;
        disy *= (disy < 0) ? -1 : 1;

        int disx = (o)-x;
        disx *= (disx < 0) ? -1 : 1;

        int menor = (disy < disx) ? disy : disx;

        cout << right << setw(3) << menor;

        if (j != o - 1)
          cout << " ";
      }
      cout << endl;
    }
    cout << endl;
  }
}
