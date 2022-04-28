#include <bits/stdc++.h>
using namespace std;

// bottom-up method fibonacci

// const int MAX_fib = 40;

// int main(){
//     int n, num;
//     cin >> n;
//     int dp[MAX_fib] = { 0 };

//     dp[0] = 1; dp[1] = 1;

//     if (n <= 1) {
//         cout << 1 << endl;
//         return 0;
//     }

//     for (int i = 2; i <= n; i++) {
//         dp[i] = dp[i-1] + dp[i-2];
//     }

//     cout << dp[n] << endl;

// }

/* top-down manner */

const int MAX_fib = 40;
int dp[MAX_fib] = { 0 };

int fib(int n) {
    if(dp[n] != 0) {
        return dp[n];
    }

    if (n <= 1) {
        dp[n] = 1;
        return dp[n];
    }

    dp[n] = fib(n-1) + fib(n-2);
    return dp[n];
}

int main() {
    int n;
    cin >> n;
    
    cout << fib(n) << endl;
    return 0;
}