#include <bits/stdc++.h>

using namespace std;

int parent [100000];
int sizeee [100000];

int find_parent(int n) {
    if (parent[n] == n) {
        return n;
    }
    return parent[n] = find_parent(parent[n]);
}

void fusao(int a, int b) {
    a = find_parent(a);
    b = find_parent(b);
    if (a == b) {
        return;

    }else {

        if (sizeee[a] > sizeee[b]) {
            parent[b] = a;
            sizeee[a] += b;

        }else {
            parent[a] = b;
            sizeee[b] += a;
        }
        return;
    }
}

int main() {
    int n, k, a, b;
    char cmd;
    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        sizeee[i] = 1;
    }

    while (k > 0 && cin >> cmd >> a >> b) {
        if (cmd == 'C') {
            if (find_parent(a) == find_parent(b)) {
                cout << "S" << "\n";
            }else {
                cout << "N" << "\n";
            }
        } else {
            fusao(a,b);
        }
        k--;
    }
}
