#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double a, b, c;

  cin >> a >> b >> c;

  double delta = (b * b) - (4 * a * c);

  if (delta <= 0 || a == 0) {
    cout << "Impossivel calcular" << endl;
    return 0;
  }

  delta = sqrt(delta);

  double r1 = ((-b + delta) / (2 * a));
  double r2 = ((-b - delta) / (2 * a));

  cout << "R1 = " << fixed << setprecision(5) << r1 << endl;

  cout << "R2 = " << fixed << setprecision(5) << r2 << endl;

  return 0;
}
