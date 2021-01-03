//Effective Approach
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+5];
    int hash[(int)1e5 + 5];

    for(int i=0; i<n; i++) {
        cin >> a[i];
        hash[a[i]] = i;
    }
    int m;
    cin >> m;

    long long vasya = 0, petya = 0;
    for(int i=0; i<m; i++) {
        int x;
        cin >> x;
        vasya += hash[x] + 1;
        petya += n - hash[x];
    }

    cout << vasya << " " << petya << "\n";
    return 0;

}