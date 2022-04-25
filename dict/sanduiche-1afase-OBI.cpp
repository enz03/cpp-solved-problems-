#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, d, c, cnt=0, cur_sum = 0, ans=0,total = 0;
    cin >> n >> d;
    int cn [n];
    cin.ignore();

    while(cnt < n && cin >> c){
        cn[cnt] = c;
        total += c;
        cnt++;
    }

    int i = 0;
    int j = 0;

    while (i < n) {
        while (j < n && cur_sum + cn[j] <= d)
        {
            cur_sum += cn[j];
            j++;
        }
        if (cur_sum == d) {
            ans++;
        }
        cur_sum -= cn[i];
        i++;
        

    }
    
    vector <int> soma_parcial_o(n), soma_parcial_f(n);
    int acc = 0;

    for (int i = 0; i < n; i++) {
        acc += cn[i];
        soma_parcial_o[i] = acc;
    }
    acc = 0;
    for (int i = n - 1; i >= 0; i--) {
        acc += cn[i];
        soma_parcial_f[i] = acc;
    }

    map <int, int> S;

    int ans2 = 0;

    for (int i = n-2; i >=0; i--) {
        S[soma_parcial_f[i+1]] += 1;
		if (soma_parcial_o[i] > d) continue;
		ans2 += S[d - soma_parcial_o[i]];
    }

    cout << ans + ans2;
}
