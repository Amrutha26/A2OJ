//Cupboards

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int l1 = 0, r1 = 0;
    for(int i=0; i<n; i++) {
        int l, r;
        cin >> l >> r;
        if(l==0) {
            l1++;
        } if(r==0) {
            r1++;
        }
    }

    cout << min(l1, n-l1) + min(r1, n-r1) << endl;
}