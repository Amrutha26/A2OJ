#include <bits/stdc++.h>
using namespace std;

int main() {
    int g[6][6];
    int n=5;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> g[i][j];
        }
    }
    int p[6], ans = -1, temp;
    for(int i=0; i<n; i++) {
        p[i] = i;
    }

    do {
        //01234
        temp = g[p[0]][p[1]] + g[p[1]][p[0]];
        temp += g[p[2]][p[3]] + g[p[3]][p[2]];
        
        //1234
        temp += g[p[1]][p[2]] + g[p[2]][p[1]];
        temp += g[p[3]][p[4]] + g[p[4]][p[3]];
        
        //234
        temp += g[p[2]][p[3]] + g[p[3]][p[2]];
        
        //34
        temp += g[p[3]][p[4]] + g[p[4]][p[3]];

        if(temp > ans) {
            ans = temp;
        }

    }

    while(next_permutation(p,p+n));

    cout << ans << endl;
    return 0;
}