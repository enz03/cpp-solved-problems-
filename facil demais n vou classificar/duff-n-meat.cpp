#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, p, a, smallest = 101, total=0;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a >> p;
        if ( smallest > p ) smallest = p;
        total += smallest * a;
    }
    cout << total;
    return 0;
}