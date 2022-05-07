#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, num, sum=0;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> num;
        sum += num;
    }
    if (n == 1){
        ( sum == 1 ) ? cout << "YES" << endl : cout << "NO" << endl;
        return 0;
    }
    if (sum != n-1) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}
