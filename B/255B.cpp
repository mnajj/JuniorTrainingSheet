#include <iostream>
#include<string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string s; cin >> s;

  int x(0), y(0);
  for(char c : s) {
    if (c == 'x') ++x;
    else ++y;
  }
  if (y > x) {
    cout << string(y - x, 'y');
  } else {
    cout << string(x - y, 'x');
  }
  return 0;
}
