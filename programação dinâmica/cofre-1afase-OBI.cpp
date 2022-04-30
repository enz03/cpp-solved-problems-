#include <bits/stdc++.h>
using namespace std;

int acc_Sum[10010][10];

int main() {
    int n, m, start, end, suf_start, suf_end;
    cin >> n >> m;
    int ar[n];

    memset(acc_Sum, 0, sizeof(acc_Sum));

    cin >> ar[0];
    acc_Sum[0][ar[0]] = 1;

    for (int i = 1; i < n; i++){
        cin >> ar[i];
        for (int j = 0; j < 10; j++) {
            if(j == ar[i]) acc_Sum[i][j] += acc_Sum[i-1][j] + 1;
            else {
                acc_Sum[i][j] += acc_Sum[i-1][j];
            }
        }
    }
    int ans[10] = { 0 };
    cin >> start;
    ans[ar[0]] = 1;
    start -= 1;


    for (int i = 0; i < m-1; i++) {
        cin >> end;
        end -= 1;

        if (start < end) {

            for (int k = 0; k < 10; k++) {
                ans[k] += (acc_Sum[end][k] - acc_Sum[start][k]);    
            }

        }else if (start > end){

            for (int k = 0; k < 10; k++) {
                if (start >= 1){
                    suf_start = (acc_Sum[n-1][k] - acc_Sum[start-1][k]);
                }else {
                    suf_start = (acc_Sum[n-1][k] - acc_Sum[start][k]);
                }
                if (end >= 1){
                    suf_end = (acc_Sum[n-1][k] -  acc_Sum[end-1][k]);
                }else {
                    suf_end = (acc_Sum[n-1][k] -  acc_Sum[end][k]);
                }

                ans[k] += suf_end - suf_start;    
            }

        }start = end;
    }
    for (int i = 0; i < 10; i++) {
        cout << ans[i] << " ";
    }

}