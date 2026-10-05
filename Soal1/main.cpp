#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int nilai[n];
  int total = 0;

  for (int i = 0; i < n; i++) {
    cin >> nilai[i];
    total += nilai[i];
  }

  int rataRata = total / n;

  int diAtasRataRata = 0;

  for (int i = 0; i < n; i++) {
    if (nilai[i] > rataRata) {
      diAtasRataRata++;
    }
  }

  cout << "Rata-rata: " << rataRata << endl;
  cout << "Di atas rata-rata: " << diAtasRataRata << endl;

  return 0;
}