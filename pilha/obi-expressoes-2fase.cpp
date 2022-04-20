#include <iostream> 
#include <list>
#include <sstream>
#include <string>
#include <istream>
#include <iostream> 
#include <stack>

using namespace std;

int main(){
    int n;
    cin >> n;
    string input;
    stack <char> s;
    bool fail = false;
    cin.ignore();

    for (int i = 0; i < n; i++) {
            fail = false;
            getline(cin, input);

            for (char& c : input) {
                if (c == '{' || c == '(' || c == '[') {
                    s.push(c);
                }
                if (!s.empty()) {

                    if (c == '}'){
                        if (s.top() != '{') {
                            fail = true;
                            break;
                        }
                        s.pop();
                    }
                    else if (c == ']'){
                        if (s.top() != '[') {
                            fail = true;
                            break;
                        }
                        s.pop();
                    }
                    else if (c == ')'){
                        if (s.top() != '(') {
                            fail = true;
                            break;
                        }
                        s.pop();
                    }
                }else{
                    fail = true;
                    break;
                }
            }
        if (s.size() != 0 || fail) {
            cout << 'N' << '\n';
        }else{
            cout << 'S' << '\n';
        }

        while (!s.empty()) {
            s.pop();
        }
    }          
}
