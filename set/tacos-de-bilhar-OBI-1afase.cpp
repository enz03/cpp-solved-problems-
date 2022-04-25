#include <bits/stdc++.h>

using namespace std;

int main() {
    int consultas, taco, ans=0;
    set <int> estoque;
    cin >> consultas;

    while (consultas > 0 && cin >> taco) {
        if (estoque.erase(taco)) {
        } else {
            estoque.insert(taco);
            ans += 2;
        }
        consultas--;
    }
    cout << ans;
}
