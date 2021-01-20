//Two Bags of Potatoes
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long y,k,n;
    cin >> y >> k >> n;
    bool found = 0;
    for(int i=k; i<=n; i+=k) {
        if(i>y) {
            found = 1;
            cout << i - y << " "; 
        }
    }

    if(!found) {
        cout << -1 << endl;
    }
    return 0;
}