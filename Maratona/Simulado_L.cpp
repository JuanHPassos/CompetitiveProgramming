//Questão que nao foi enviada a tempo
#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int k;
    string palavra;
    cin >> palavra >> k;

    priority_queue<int>pq[k];
    for(int i = 0; i < (int)palavra.size(); i++){
        int atual = i%k;
        int c = palavra[i];
        pq[atual].push(-c);
    }
    for(int i = 0; i < (int)palavra.size(); i++){
        int atual = i%k;
        int eu = pq[atual].top(); pq[atual].pop();

        eu = -eu;
        char c = eu;
        palavra[i] = c;
    }

    cout << palavra;
    return 0;
}
