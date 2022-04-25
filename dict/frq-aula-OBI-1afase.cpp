#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, v, cnt=0;
    map<int, int> dict;
    cin >> n; cin.ignore();
    while (cnt < n && cin >> v) {
        if (dict.find(v) == dict.end()) {
            dict.insert({v, 1});
        }
        cnt++;
    }
    cnt = 0;
    for (const auto& [key, value] : dict) {
        cnt++;
    }
    cout << cnt;
    return 0;
}
