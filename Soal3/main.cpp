#include <iostream>
#include <string>

using namespace std;

int main() {
  string kata;
  char target;

  cin >> kata;
  cin >> target;

  int jumlah = 0;
  for (int i = 0; i < kata.length(); i++) {
    if (kata[i] == target) {
      jumlah++;
    }
  }

  cout << jumlah << endl;

  return 0;
}