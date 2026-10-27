#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {
  char op;
  double m, sum = 0;
  int c = 0;

  cin >> op;

  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      cin >> m;

      if (j < 11 - i) {
        sum += m;
        c++;
      }
    }
  }

  if (op == 'M') {
    cout << fixed << setprecision(1) << sum / c << endl;
    return 0;
  }

  cout << fixed << setprecision(1) << sum << endl;

  return 0;
}
