#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, n, m, num, sum=0;
    cin >> N;
 
    for (int i=0; i<N; i++) {
        cin >> n >> m;
        for (int j=0; j<n ; j++) {
            cin >> num;
            sum += num;
        }
        ( sum == m ) ? cout << "YES" << endl : cout << "NO" << endl;
        sum=0;
 
    }
    return 0;
}