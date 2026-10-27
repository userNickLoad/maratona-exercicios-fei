#include <iostream>
#include <string>

using namespace std;
int main() {
  float num;

  cin >> num;

  if (!(num <= 100 && num >= 0)) {
    cout << "Fora de intervalo" << endl;
    return 0;
  }

  string s = "Intervalo ";

  if (num > 75.0f) {
    s += "(75,100]";
  } else if (num > 50.0f) {
    s += "(50,75]";
  } else if (num > 25.0f) {
    s += "(25,50]";
  } else {
    s += "[0,25]";
  }

  cout << s << endl;

  return 0;
}
