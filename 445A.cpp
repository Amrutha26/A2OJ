//DZY Loves Chessboard
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    string s;

    for(int i=0; i<n; i++) {
        cin >> s;
        for(int j=0; j<m; j++) {
            if(s[j] == '-') {
                cout << '-';
            } else {
                cout << ((j+i) % 2 == 0 ? "B" : "W");
            }
        }

        cout << endl;
    }

    return 0;
}

