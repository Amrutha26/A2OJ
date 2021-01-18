//Sereja and Bottles
#include <bits/stdc++.h>
#define ll long long signed int
using namespace std;

int main() {
    ll n;
    cin >> n;

    ll a[n];
    ll b[n];

    for(ll i=0; i<n; i++) {
        cin >> a[i] >> b[i];
    }

    ll ans[n] = {0};
    for(ll i=0; i<n; i++) {
        for(ll j=0; j<n; j++) {
            if(i!=j) {
                if(b[i] == a[j]) {
                    ans[j] = 1;
                }
            }
        }
    }

    ll count = 0;
    for(ll i=0; i<n; i++) {
        if(ans[i] == 0) {
            count++;
        }
    }

    cout << count;
    return 0;
}