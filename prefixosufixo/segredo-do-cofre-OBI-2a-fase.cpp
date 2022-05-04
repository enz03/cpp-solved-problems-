#include <bits/stdc++.h>

using namespace std;

int prefixSum[10][100010];
int total[10];
int n, m;

int main(){
    cin >> n >> m;

    for(int i=1; i<=n; i++){
        int x;
        cin >> x;

        prefixSum[x][i]++;

        for(int j=0; j<10; j++){
            prefixSum[j][i] += prefixSum[j][i-1];
        }
    }

    int lastPos = 0;
    for(int i=0; i<m; i++){
        int currentPos;
        cin >> currentPos;

        for(int j=0; j<=9; j++){
            if(currentPos > lastPos){
                total[j] += prefixSum[j][currentPos] - prefixSum[j][lastPos];
            }else{
                total[j] += prefixSum[j][lastPos-1] - prefixSum[j][currentPos-1];
            }
        }

        lastPos = currentPos;
    }

    for(int i=0; i<10; i++){
        cout << total[i] << " ";
    }
    cout << "\n";

    return 0;
}