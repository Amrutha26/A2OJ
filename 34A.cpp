//Reconnaissance 2
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    int min = 100000;
    int posmin;
    for(int i=0; i<n; i++) {
        if(i==n-1) {
            if(abs(a[i] - a[0]) < min) {
                min = abs(a[i] - a[0]);
                posmin = i+1;
            }
        }
        else {
            if(abs(a[i] - a[i+1]) < min) {
                min = abs(a[i] - a[i+1]);
                posmin = i+1;
            }
        }
    }

    if(posmin == n) {
        cout << posmin << " " << "1";
    } else {
        cout << posmin << " " << posmin+1;
    }

    return 0;
}