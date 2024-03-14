#include<iostream>

using namespace std;

int main(){
    int n, a[100], s, i, j;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(i = 0; i < n;i++)
        cin >> a[i];
    
    cout <<  "Enter the number: ";
    cin >> s;

    for(i = 0; i<n;i++){
        for(j = 0; j< n;j++){
            if((a[i] + a[j] == s) && (i != j)){
                cout << "Pair Found :" << a[i] << "," << a[j] << endl;
                break;
            }
        }
    }
    return 0;
}