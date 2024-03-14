#include<iostream>

using namespace std;

int main(){
    int r, c, a[100][100], i, j, min, max;
    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;
    cout << "Enter the elements: \n";

    for (i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            cin >> a[i][j];
        }
    }

    min = a[0][0], max = a[0][0];

    for (i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            if (min >  a[i][j])
                min = a[i][j];
            if (max < a[i][j])
                max = a[i][j];
        }
    }

    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;

    
    return 0;
}