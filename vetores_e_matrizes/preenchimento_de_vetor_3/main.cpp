#include <iomanip>
#include <iostream>

using namespace std;
int main(void) {
  double num;

  cin >> num;

  for (int i = 0; i < 100; i++) {
    cout << "N[" << i << "] = " << fixed << setprecision(4) << num << endl;
    num = num / 2;
  }

  return 0;
}
