#include <iostream>
#include <malloc.h>

using namespace std;

int main() {
  int t, bigger = 0;

  cin >> t;

  int *cases = (int *)malloc((t * sizeof(int)));

  for (int i = 0; i < t; i++) {
    cin >> cases[i];

    bigger = (cases[i] > bigger) ? cases[i] : bigger;
  }

  unsigned long int *fib =
      (unsigned long int *)malloc((bigger + 1) * sizeof(unsigned long int));

  fib[0] = 0;
  fib[1] = 1;

  for (int i = 2; i <= bigger; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];
  }

  for (int i = 0; i < t; i++) {
    cout << "Fib(" << cases[i] << ") = " << fib[cases[i]] << endl;
  }

  free(cases);
  free(fib);

  return 0;
}
