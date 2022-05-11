#include <bits/stdc++.h>
using namespace std;
 

const int MAXN = 1000;
const int MAXV = 100000;
const int INF = 10000;


int main() {
    int n, v, num;
    cin >> v >> n;

    int dp[n+10][v+10];

    int moeda[n];

    for (int i=0; i < n; i++) {
        cin >> num;
        moeda[i] = num;
    }

    for (int i=0; i < n+1; i++) {
        dp[i][0] = true;
    }

    for (int j=1; j < v+1; j++) {
        dp[0][j] = false;
    }

    for (int i=1; i <= n; i++) {

        for (int j=1; j <= v; j++) {

            if (moeda[i-1] > j) {
                dp[i][j] = dp[i-1][j];

            }else {

                dp[i][j] = dp[i-1][j] || dp[i-1][j-moeda[i-1]];
            }
        }
    }
    bool check = dp[n][v]; 
    ( check ) ? cout << "S" << "\n" : cout << "N" << "\n";
    return 0;



}   
