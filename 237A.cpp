//Free Cash

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = -1, b = -1;
    int ans = 0, count = 1;
    for(int i=0; i<n; i++) {
        int c,d;
        cin >> c >> d;
        if(a==c && b==d) {
            count++;
        } else {
            ans = max(ans,count);
            count = 1;
            a = c;
            b = d;
        }
    }

    ans = max(count, ans);
    cout << ans << endl;
    return 0;
}