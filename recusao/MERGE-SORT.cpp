#include <bits/stdc++.h>
// https://neps.academy/br/course/tecnicas-de-programacao/lesson/eu-aprendi-o-mergesort
using namespace std;


void merge(int start, int end, vector<int> &ar) {
    int ptr1 = start;
    int end1 = (start + end)/2;

    int ptr2 = ((start + end)/2) + 1;
    int end2 = end;
    vector <int> S;

    while (ptr1 <= end1 && ptr2 <= end2) {
        if (ar[ptr1] < ar[ptr2]) {

            S.push_back(ar[ptr1]);
            ptr1++;

        }else {
            S.push_back(ar[ptr2]);
            ptr2++;
        }
    }

    while (ptr1 <= end1) {
        S.push_back(ar[ptr1]);
        ptr1++;
    }

    while (ptr2 <= end2) {
        S.push_back(ar[ptr2]);
        ptr2++;
    }

    for (int i = 0; i < S.size(); i++) {
        ar[start + i] = S[i];
    }

}


void mergeSort(int start, int end, vector<int> &ar){
    int mid;
    if (start < end) {
        mid = (start+end) / 2;
        mergeSort(start, mid, ar);
        mergeSort(mid+1, end, ar);
        merge(start, end, ar);
    }

}




int main(){
    vector<int> ar;
    int n, num;
    cin >> n;

    for (int i =0; i < n; i++) {
        cin >> num;
        ar.push_back(num);
    }

    mergeSort(0, ar.size()-1, ar);
    for (int i = size(ar)-1; i >= 0; i--) {
        cout << ar[i] << " ";
    }
}