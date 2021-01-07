// Dragons
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int s,n;
    cin >> s >> n;
    long long int X[n], Y[n], Z[n];
    for(long long int i=0; i<n; i++) {
        cin >> X[i] >> Y[i];
        Z[i] = X[i];
    }
    sort(Z,Z+n);
    for(long long int i=0; i<n; i++) {
        if(Z[i] >= s) {
            cout << "NO";
            return 0;
        }
        else {
            for(long long int j=0; j<n; j++) {
                if(Z[i] == X[j]) {
                    X[j] = 0;
                    s+=Y[j];
                }
            }
        }
    }

    cout << "YES";
    return 0;
}