#include <bits/stdc++.h>

using namespace std;


int main(){
    int N, n, biggest= -101;
    cin >> N;
    int room[N];
    int dp[N]; // dp represents the current biggest sum till i


    for (int i=0; i < N; i++) {
        cin >> n;
        room[i] = n;
    }

    dp[0] = room[0];
    for (int i=1; i<N; i++) {
        dp[i] = max(room[i], dp[i-1] + room[i]);
        if (dp[i] > biggest) biggest = dp[i]; 
    }
    cout << biggest << endl;
    return 0;
    
}
