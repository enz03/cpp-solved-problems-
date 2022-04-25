#include <bits/stdc++.h>

using namespace std;


int main() {
    int c, n, d, t, cnt=0, t0, ans=0;
    priority_queue <int, vector<int>, greater<int>> pq;
    
    while (cin >> c >> n) {

        while (cnt < n && cin >> t >> d) {

            if (cnt < c) {
                pq.push(t+d);

            } else {
                t0 = pq.top();
                if (t0 - t > 20) {  
                    ans++;
                }   
                pq.pop();
                pq.push(max(t0,t)+d);
            }
            cnt++;
        }
        cout << ans;
        return 0;
    }
}