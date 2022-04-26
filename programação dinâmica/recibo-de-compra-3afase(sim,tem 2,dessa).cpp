#include <bits/stdc++.h>
// https://neps.academy/br/course/tecnicas-de-programacao/lesson/recibo-de-compra
using namespace std;


// min_i  e' o valor atual do inteiro do numero, sendo lido da esquerda pra direita
// max_i e' o quanto falta pra chegar no numero desejado 
// ex: r = 9   [1,..,..]  min_i seria 2 e max_i seria 9 - 1 = 8 (nessa iteracao)
// ex 2: r = 9, [1,2,...] min_i seria 3 e max_i seria 8 - 2 = 6, e como 3 <= 6,
// existe uma solu'c~ao que tem pd[passo=3][min_i=3][max_i=6], nesse caso : 6 (que nao precisa saber)
//  pd funciona pq alguns casos como [5,6,10,....] r=25 tem solu'c~ao analoga a
//                                   [4,7,10,....] pois em ambos casos 
//                                                min_i = 11, max_i= 4 e passo = 4


int r, k, ans;
int dp[22][110][110];

int solve(int passo, int min_i, int max_i){
    if (dp[passo][min_i][max_i] != -1){ 
            return dp[passo][min_i][max_i];
        }

    if (passo == k) {
        return min_i <= max_i;
    }else {
        int total = 0;
        for(int i = min_i; i <= max_i; i++){
            total += solve(passo + 1, i+1, max_i-i);
        }
        return dp[passo][min_i][max_i] = total;
    }
}

int main(){
    cin >> r >> k;
   memset(dp, -1, sizeof(dp));

    cout << solve(1,1,r) << "\n";

    return 0;
}