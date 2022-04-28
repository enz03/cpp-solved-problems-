#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, num;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++) {
        cin >> num;
        ar[i] = num;
    }
    // BUBBLE TIMEEEE HELL YEAH BABY

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1; j++) {
            if (ar[j] > ar[j+1]) swap(ar[j], ar[j+1]);
        }
        
    cout << ar[n-1-i] << " "; 
    }
    cout << ar[0] << endl;
}   