#include <bits/stdc++.h>

using namespace std;

int main() {
    string name;
    int skill;
    int cnt = 0;
    int n;int t;
    string s; 
    
    string selected;

    cin >> n >> t;cin.ignore();
    string names [n];
    priority_queue <pair <int, string>> pq;
    

    while (cnt < n && cin >> name >> skill) {
        pq.push(make_pair(skill, name));
        cnt++;
    }

    for (int i = 0; i < n; i++) {
        selected = pq.top().second;
        names[i] = selected;
        pq.pop();
    }

    vector<string> temp;

    for (int team = 0; team < t; team++) {
        cout << "Time " << to_string(team+1) << "\n";
        for (int i  = 0; team + t*i < n ; i++) {

            if (team + t*i < n) {
               temp.push_back(names[team + t*i]);
            }

        }
        sort(temp.begin(), temp.end());
        for (int i = 0; i < temp.size(); i++) {
            cout << temp[i] << "\n";
        }
        cout << "\n";

        temp.clear();
        
    }  
}