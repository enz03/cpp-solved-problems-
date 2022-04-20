#include <iostream> 
#include <list>
#include <sstream>
#include <string>
#include <istream>

using namespace std;

int main(){
    char start_players [16] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P'};
    char quarter_finals [8] = {};
    char semi [4] = {};
    char final [2] = {};

    string line;
    int match [2];
    int num;
    int k;
    int quarters;
    int semis;
    
    for (int i = 0; i < 15; i++) {
        
        getline(cin, line);
        istringstream iss(line);
        
        k=0;
        while(iss >> num) {
            match[k] = num;
            k++;

            if (k == 2 && i < 8) {
                if (match[0] > match[1]) {
                    quarter_finals[i] = start_players[i*2];
                }else {
                    quarter_finals[i] = start_players[i*2+1];
                }
            }

            if (k == 2 && i >= 8 && i < 12) {
                quarters = i - 8;
                
                if (match[0] > match[1]) {
                    semi[quarters] = quarter_finals[quarters*2];
                }else {
                    semi[quarters] = quarter_finals[quarters*2+1];
                }
            }

            if (k == 2 && i >= 12 && i < 14) {
                semis = i - 12;
                
                if (match[0] > match[1]) {
                    final[semis] = semi[semis*2];
                }else {
                    final[semis] = semi[semis*2+1];
                }
            }

            if (k == 2 && i == 14) {
                
                if (match[0] > match[1]) {
                    cout << final[0];
                }else {
                    cout << final[1];
                }
                return 0;
            }
            
            }
        }
    }
