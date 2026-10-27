#include <iostream>

using namespace std;

int main() {
  int n, smaller, idx = 0;

  cin >> n;

  cin >> smaller;

  for (int i = 1; i < n; i++) {
    int temp;
    cin >> temp;

    if (smaller > temp) {
      smaller = temp;
      idx = i;
    }
  }

  cout << "Menor valor: " << smaller << endl;
  cout << "Posicao: " << idx << endl;

  return 0;
}
