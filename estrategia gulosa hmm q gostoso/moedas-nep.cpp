#include <bits/stdc++.h>
using namespace std;
// https://neps.academy/br/course/tecnicas-de-programacao/lesson/estrategia-gulosa

int main() {
    int goal, ans=0;
    const int LIST_sz = 6;
    int S[LIST_sz] = {1, 5, 10, 25, 50, 100};
    cin >> goal;

    for (int i = LIST_sz - 1; i >= 0; i--) {

        while (goal >= S[i]) {
            goal -= S[i];
            ans++;
        }
    }
    cout << ans;
    return 0;
}