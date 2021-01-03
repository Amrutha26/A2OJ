//Supercentral Point

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int X[n+1], Y[n+1];
    for(int i=0; i<n; i++) {
        cin >> X[i] >> Y[i];
    }

    int pt = 0;

    for(int i=0; i<n; i++) {
        int l=0,r=0,u=0,d=0;
        int x = X[i];
        int y = Y[i];
        for(int j=0; j<n; j++) {
            if(X[j]==x) {
                if(Y[j] > y) {
                    u++;
                }
                if(Y[j] < y) {
                    d++;
                }
            }

            if(Y[j] == y) {
                if(X[j] > x) {
                    r++;
                } 
                if(X[j] < x) {
                    l++;
                }
            }

        }

        if(r>0 && l>0 && u>0 && d>0) {
            pt++;
        }
    }

    cout << pt;
    return 0;
}