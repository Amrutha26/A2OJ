//Kuriyama Mirai's Stones
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    long long sum = 0;
    cin >> n;
    long long arr[n], sorted[n];
    int origin[n];
    for(int i=0; i<n; i++) {
        cin >> origin[i];
        sum += origin[i];
        arr[i] = sum;
    }
    sort(origin, origin + n);
    sum = 0;
    for(int i=0; i<n; i++) {
        sum += origin[i];
        sorted[i] = sum;
    }

    cin >> m;
    for(int i=0; i<m; i++) {
        int type, l, r;
        cin >> type >> l >> r;
        l--;
        r--;
        if(type == 1) {
            if(l - 1 >= 0) {
                cout << arr[r] - arr[l-1] << endl;
            } else {
                cout << arr[r] << endl;
            }
        } else {
            if(l-1 >= 0) {
                cout << sorted[r] - sorted[l-1] << endl;
            } else {
                cout << sorted[r] << endl;
            }
        }
    }
}