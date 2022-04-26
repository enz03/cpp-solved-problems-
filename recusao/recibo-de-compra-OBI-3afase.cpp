#include <bits/stdc++.h>
// https://neps.academy/br/course/tecnicas-de-programacao/lesson/recibo-de-compra
using namespace std;


int r, k, ans;

void solve(int min_i, int max_i , int passo){
    if (passo == k) {
        if (min_i <= max_i) ans++;
    }

    for(int i = min_i; i <= max_i; i++){
        solve(i+1, max_i - i, passo + 1);
    }
    return;
}

int main(){
    cin >> r >> k;
    ans = 0;
    solve(1, r, 1);
    cout << ans << "\n";

    return 0;
}