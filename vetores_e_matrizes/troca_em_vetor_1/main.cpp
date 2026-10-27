#include <iostream>

using namespace std;
int main() {
  int n[20];

  for (int i = 0; i < 20; i++) {
    int idx = 19 - i;
    cin >> n[idx];
  }

  for (int i = 0; i < 20; i++) {
    cout << "N[" << i << "] = " << n[i] << endl;
  }

  return 0;
}
