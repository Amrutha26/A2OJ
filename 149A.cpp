//Business trip
#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,k,t;
    cin >> k;
    vector<int>a;
    for(i=0; i<12; i++) {
        cin >> t;
        a.push_back(t);
    }
    sort(a.rbegin(), a.rend());
    int count = 0, num=0;
    for(i=0; i<12; i++) {

        if(num >= k) {
            break;
        } else {
            num = num + a[i];
            count++;
        } 
    }
    if(num < k) {
        cout << -1 << endl;
    } else {
        cout << count << endl;
    }

    return 0;
}