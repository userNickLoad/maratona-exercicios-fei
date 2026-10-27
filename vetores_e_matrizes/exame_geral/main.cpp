#include <algorithm>
#include <functional>
#include <iostream>
#include <malloc.h>

using namespace std;
int main() {
  int n, q;

  while (cin >> n >> q) {
    int *notas = (int *)malloc(n * sizeof(int));
    int *posicoes = (int *)malloc(q * sizeof(int));

    for (int i = 0; i < n; i++) {
      cin >> notas[i];
    }

    sort(notas, notas + n, greater<int>());

    for (int i = 0; i < q; i++) {
      cin >> posicoes[i];
    }

    for (int i = 0; i < q; i++) {
      cout << notas[posicoes[i] - 1] << endl;
    }
    free(notas);
    free(posicoes);
  }

  return 0;
}
