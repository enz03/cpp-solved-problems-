#include <bits/stdc++.h>
using namespace std;


int n, k;
#define ll long long
#define MOD 1000000007

ll dp[1010][1010];


int main() { 

    cin >> n >> k;

    dp[1][1] = 1;
    dp[1][0] = 1;

    if (k <= 1) {
        cout << 1;
        return 0;
    }

    for (int i = 1; i <= n; i++) {

        for (int j = 0; j <= i; j++) {
            
            if (j+1 < k) {
                dp[i+1][j+1] += dp[i][j];
                dp[i+1][j+1] = dp[i+1][j+1] % MOD;
            }

            dp[i+1][0] += dp[i][j];
            dp[i+1][0] = dp[i+1][0] % MOD;
        }           
    }
    int ans = 0;
    for (int i = 0; i < k; i++) ans = (ans + dp[n][i]) % MOD;
    
    cout << ans;

}