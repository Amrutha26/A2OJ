// Sale
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,t, ans =0;
    cin >> n >> t;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i=0; i<t && a[i] <= 0; i++) {
        ans -= a[i];
    }
    cout << ans;
    return 0;
}