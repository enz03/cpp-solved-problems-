#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, K, n;
    cin >> N;
    int casa[N];

    for (int i=0; i < N; i++) {
        cin >> n;
        casa[i] = n;
    }
    cin >> K;

    int i = 0, j = N - 1, result;
    
    while (i < j) {
        result = casa[i] + casa[j];
        if (result < K) i++;
        else if (result > K) j--;
        else {
            cout << casa[i] << " " << casa[j] << endl;
            return 0;
        }
    }
}
