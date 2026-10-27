#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print_matriz(int ordem) {
  unsigned long long int last = 0X1ULL << (ordem - 1);
  last *= last;

  int t = to_string(last).size();

  for (int i = 0; i < ordem; i++) {
    for (int j = 0; j < ordem; j++) {
      cout << right << setw(t) << (0x1ULL << (i + j));
      if (j != ordem - 1)
        cout << " ";
    }
    cout << endl;
  }
}

//     256
//     256

int main(void) {
  vector<int> v;

  while (true) {
    int temp;

    cin >> temp;

    if (temp == 0) {
      break;
    }

    v.push_back(temp);
  }

  for (int o : v) {
    print_matriz(o);
    cout << endl;
  }

  return 0;
}
