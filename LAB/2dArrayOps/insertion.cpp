#include <iostream>
using namespace std;
int main() {
  unsigned int n, m, a[100][100], e, f = 0, insr, insc;
  cout << " How many rows you want to enter : ";
  cin >> n;
  cout << " How many columns you want to enter : ";
  cin >> m;
  cout << "\n Enter the elements \n";
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> a[i][j];

  cout << "\n Enter the element you want to insert : ";
  cin >> e;
  cout << "\n Enter the row number where you want to insert : ";
  cin >> insr;
  cout << "\n Enter the column number where you want to insert : ";
  cin >> insc;

  for (int i = m; i > insc; i--)
    a[insr][i] = a[insr][i - 1];

  a[insr][insc] = e;

  cout << "\n The elements after inserting one element are as \n";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < ((i == insr) ? m + 1 : m); j++)
      cout << a[i][j] << "\t";
    cout << "\n";
  }

  return 0;
}