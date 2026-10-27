#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {
  int l;
  char op;
  double m, sum = 0;

  cin >> l >> op;

  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      cin >> m;

      if (i == l)
        sum += m;
    }
  }

  if (op == 'M') {
    cout << fixed << setprecision(1) << sum / 12 << endl;
    return 0;
  }

  cout << fixed << setprecision(1) << sum << endl;

  return 0;
}
