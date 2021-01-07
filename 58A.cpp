// Chat room

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int n = s.length();
    string h = "hello";

    int j = 0;
    for(int i=0; i<n; i++) {
        if(j < 5 && s[i] == h[j])
        j++; 
    }

    j == 5 ? cout << "YES" : cout << "NO";

    return 0;
}