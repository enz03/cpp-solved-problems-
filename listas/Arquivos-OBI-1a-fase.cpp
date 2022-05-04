#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, b, num;
    cin >> n >> b;
    int nums[n];

    for (int i=0; i<n; i++) {
        cin >> num; 
        nums[i] = num;       
    }

    sort(nums, nums+n);
    int ans = 0;
    int j = n-1;
    int result;
    int i=0;

    while (i < j) {
        result = nums[i] + nums[j];
        if (result > b) {
            ans++;
            j--;
        }else{
            ans++;
            i++;
            j--;
        }
    }
    if (i == j) ans++;
    
    cout << ans;
    return 0;
}





