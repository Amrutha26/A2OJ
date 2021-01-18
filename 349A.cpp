//Cinema Line
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    bool ans = true;
    map <int,int> count;
    
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        if(x == 25) {
            count[x]++;
        } else if(x == 50) {
            count[50]++;
            if(count[25] > 0) {
                count[25]--;
            } else {
                ans = false;
            }
        } else {
            count[100]++;
            if(count[50] > 0 && count[25] > 0) {
                count[50]--;
                count[25]--;
            } else if(count[25] >= 3) {
                count[25] -= 3;
            } else {
                ans = false;
            }
        } 
    }

    cout << (ans ? "YES" : "NO") << endl;
    return 0;
}
