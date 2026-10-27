#include <iostream>

using namespace std;
void print_even(int arr[], int *idx) {
  for (int i = 0; i < *idx; i++) {
    cout << "par[" << i << "] = " << arr[i] << endl;
  }

  *idx = 0;
}

void print_odd(int arr[], int *idx) {
  for (int i = 0; i < *idx; i++) {
    cout << "impar[" << i << "] = " << arr[i] << endl;
  }

  *idx = 0;
}
int main(void) {

  int even[5], even_idx = 0, odd[5], odd_idx = 0;

  for (int i = 0; i < 15; i++) {
    int in;

    cin >> in;

    if (!(in & 0X1)) {
      even[even_idx] = in;
      even_idx += 1;
    } else {
      odd[odd_idx] = in;
      odd_idx += 1;
    }

    if (odd_idx == 5) {
      print_odd(odd, &odd_idx);
    }

    if (even_idx == 5) {
      print_even(even, &even_idx);
    }
  }

  print_odd(odd, &odd_idx);

  print_even(even, &even_idx);

  return 0;
}
