#include <iostream>
using namespace std;
int main() {
  unsigned int n, m, a[100][100], e, f = 0, delr;
  cout << " How many rows you want to enter : ";
  cin >> n;
  cout << " How many columns you want to enter : ";
  cin >> m;
  cout << "\n Enter the elements \n";
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> a[i][j];

  cout << "\n Enter the element you want to delete : ";
  cin >> e;
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (e == a[i][j]) {
        for (int k = j; k < m - 1; k++)
          a[i][k] = a[i][k + 1];
        f = 1;
        delr = i;
      }
    }
  }

  if (f == 1) {
    cout << "\n The elements after deleting one element are as \n";
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < ((i == delr) ? m - 1 : m); j++)
        cout << a[i][j] << "\t";
      cout << "\n";
    }
  } else {
    cout << "\n None of given element deleted \n\n Elements are as \n";
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++)
        cout << a[i][j] << "\t";
      cout << "\n";
    }
  }

  return 0;
}