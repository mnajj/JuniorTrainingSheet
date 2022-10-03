#include <iostream>

using namespace std;

int main() {
  int a, b;

  int f = 0, fair = 0, s = 0;
  cin >> a;
  cin >> b;
  for (int i = 1; i < 7; i++) {
    int x = abs(a - i);
    int y = abs(b - i);
    if (x < y) {
      f++;
    } else if (y < x) {
      s++;
    } else {
      fair++;
    }
  }
  cout << f << " ";
  cout << fair << " ";
  cout << s << " ";
  return 0;
}
