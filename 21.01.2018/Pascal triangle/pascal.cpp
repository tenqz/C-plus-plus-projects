#include <iostream>
 
using namespace std;
 
int main()
{
    int i, j, n;
 
    cin >> n;
    int a[n][n];
    for (i = 0; i < n; i++) { 
      a[0][i] = 1; a[i][0] = 1; 
    }
 
    for (i = 1; i < n; i++) {
      for (j = 1; j < n; j++)
        a[i][j] = a[i-1][j] + a[i][j-1];
    }

    for (i = 0; i < n; i++) {
      for (j = 0; j <= i; j++) {
        cout << a[j][i-j] << ' ';
      }
      cout << endl;
    }
 
    return 0;
}