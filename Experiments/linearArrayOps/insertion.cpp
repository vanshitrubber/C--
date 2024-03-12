#include <iostream>
using namespace std;
int main() {
  unsigned int n, a[50], e, p;
  cout << " How many elements you want to enter : ";
  cin >> n;
  cout << "\n Enter the elements \n";
  for (int i = 1; i <= n; i++)
    cin >> a[i];


  cout << "\n Enter the element you want to enter : ";
  cin >> e;
  cout << "\n Enter the position where the element is to be inserted : ";
  cin >> p;


  for (int k = n; k >= p; k--)
    a[k + 1] = a[k];
  a[p] = e;

  cout << "\n The elements are as \n";
  for (int i = 1; i <= n + 1; i++)
    cout << a[i] << "\t";
  return 0;
}
