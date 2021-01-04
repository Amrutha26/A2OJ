//Petr and Book
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll p, arr[7], s=0;
    cin >> p;
    for(ll i=0; i<7; i++) {
        cin >> arr[i];
        s+=arr[i];
    }
    ll i = 0;
    while(p > 0) {
        if(p > s) {
            p-=s;
            i=0;
        } else {
            p-=arr[i];
            i++;
        }
    }

    cout << i;
    return 0;
}