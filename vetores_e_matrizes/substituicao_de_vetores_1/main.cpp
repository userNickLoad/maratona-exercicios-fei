#include <iostream>

using namespace std;
int main() {
  int X[10];

  for (int i = 0; i < (sizeof(X) / sizeof(X[0])); i++) {
    cin >> X[i];
    X[i] = (X[i] <= 0) ? 1 : X[i];
  }

  for (int i = 0; i < (sizeof(X) / sizeof(X[0])); i++) {
    cout << "X[" << i << "] = " << X[i] << endl;
  }

  return 0;
}
