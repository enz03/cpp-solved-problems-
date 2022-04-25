# include <bits/stdc++.h>

using namespace std;

int main() {
    int c, n, pc, vc, pn, vn, cnt=0;
    map <int, int> dict;
    map <int, int> ans;
    vector <int> installed;
    cin >> c >> n;
    cin.ignore();

    while (cnt < c && cin >> pc >> vc)
    {
        if (dict.find(pc) != dict.end()) {

            if (dict[pc] < vc) {
                dict[pc] = vc;
            }

        }else {
            dict.insert({pc,vc});
            installed.push_back(pc);
            
        }
        cnt++;
    }

    cnt = 0;
    
    while (cnt < n && cin >> pn >> vn)
    {
        if (dict.find(pn) != dict.end() || ans.find(pn) != ans.end()) {

            if (dict[pn] < vn) {
                dict[pn] = vn;
                ans[pn] = vn;
            }

        }else {
            ans.insert({pn,vn});
        }
        cnt++;
    }
    for (auto const &pair: ans) {
        cout << pair.first << " "<< pair.second << "\n";
    }
    return 0;
}
