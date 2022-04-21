#include <bits/stdc++.h>
using namespace std;

bool tem_subset(int set[], int n, int sum) {
    bool matrix [n+1][sum+1];

    for (int i = 0; i < n+1; i++) {
        matrix[i][0] = true;
    }
    for (int j = 1; j < sum+1; j++) {
        matrix[0][j] = false;
    }
    for (int i = 1; i < n+1; i++) {
        for (int j = 1; j < sum+1; j++) {
            if (j < set[i-1]) {
                matrix[i][j] = matrix[i-1][j];
            }else {
                matrix[i][j] = matrix[i-1][j] || matrix[i-1][j-set[i-1]];
            }
        }
    }
    return matrix[n][sum];
}

int main () {
    int r;
    int k;
    int j = 0;
    bool found = false;
    

    int connection [2];
    

    while (cin.peek() != EOF && cin >> r >> k) {
        int cities[r] = { 0 };
        j = 0;
            while (j < k && cin >> connection[0] >> connection[1])
            {
                cities[connection[0]-1]++;
                cities[connection[1]-1]++;
                j++;
            }
            if (tem_subset(cities, r, k)) {
                cout << "S" << "\n";
            }else {
                cout << "N" << "\n";
            }
    }
}