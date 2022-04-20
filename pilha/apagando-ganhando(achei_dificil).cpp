#include <bits/stdc++.h>

// tive que ver a resposta desse :(
// a ideia principal aqui é lembrar que quem manda é o primeiro
// se tiver um numero maior q o atual, devemos apagar o atual e colocar
// o maior como o novo líder da pilha 
// (lembrando de nao passar o limite de qnts podem ser apgados)

using namespace std;

int main(){
    int n, d;
    string numero;

    int apagados = 0;
    
    
    string resposta;

    while (cin >> n >> d){
        if(n == 0 && d == 0) return 0;
        cin >> numero;
        for (char c: numero) {
            

            while (apagados < d && resposta.size() != 0 && c > resposta.back()) {
                 
                apagados++;
                resposta.pop_back();
            }


            if (resposta.size() < n-d){
                resposta.push_back(c);
            }
        }

        cout << resposta << '\n';
        resposta.clear();  
        apagados = 0;
    }
    return 0;
}
