#include <bits/stdc++.h>

using namespace std;

int main() {
    set <int> alice, beatriz, trade;
    int Na, Nb, nA, nB, id, total;
    cin >> nA >> nB;

    while (nA > 0 && cin >> id) {
        alice.insert(id);
        trade.insert(id);
        nA--;
    }
    while (nB > 0 && cin >> id) {
        beatriz.insert(id);
        trade.insert(id);
        nB--;
    }
    Na = size(alice);
    Nb = size(beatriz);
    total = size(trade);
    
    if (Na > Nb) {
        cout << Nb - (Na + Nb - total);
    }else {
        cout << Na - (Na + Nb - total);
    }

}
