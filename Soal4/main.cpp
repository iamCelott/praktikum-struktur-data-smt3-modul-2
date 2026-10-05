#include <iostream>

using namespace std;

int main() {
  int x, y;

  cin >> x >> y;

  int temp = x;
  x = y * 10;
  y = temp * 10;

  cout << "x = " << x << ", y = " << y << endl;

  return 0;
}