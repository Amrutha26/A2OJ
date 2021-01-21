// TL
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n,m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    for(int i=0; i<m; i++) {
        cin >> b[i];
    }
    sort(a, a+n);
    sort(b, b+m);
    int min = max(a[n-1], 2*a[0]);
    int max = b[0];
    if(min >= max) {
        cout << -1;
    } else {
        cout << min;
    }
 
    return 0;
}