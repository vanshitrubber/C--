#include <iostream>
using namespace std;

int main() {
  unsigned int n, a[50], t, k, i, j;
  cout << " How many elements you want to enter : ";
  cin >> n;
  cout << "\n Enter the elements \n";
  for (int i = 1; i <= n; i++)
    cin >> a[i];

  for (k = 1; k < n; k++) {
    for (j = 1; j <= n - k; j++) {
      if (a[j + 1] < a[j]) {
        t = a[j + 1];
        a[j + 1] = a[j];
        a[j] = t;
      }
    }
  }

  cout << "\n Sorted array using bubble sort is as \n";
  for (i = 1; i <= n; i++)
    cout << a[i] << "\n";
  return 0;
}