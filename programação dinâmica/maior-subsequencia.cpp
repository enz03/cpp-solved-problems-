#include <bits/stdc++.h>
using namespace std;

int dp[110][110];

int main() {

    int n, m, num, largest_subsequence;
    cin >> n >> m; 
    int sqnc1[n], sqnc2[m];

    for (int i=0; i<n; i++) {
        cin >> num;
        sqnc1[i] = num;
    }

        for (int i=0; i<m; i++) {
        cin >> num;
        sqnc2[i] = num;
    }

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            ( sqnc1[i-1] == sqnc2[j-1] ) ? dp[i][j] = dp[i-1][j-1] + 1 : dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    largest_subsequence = dp[n][m];
    cout << n-largest_subsequence << " " << m-largest_subsequence << endl;
    return 0;

}
