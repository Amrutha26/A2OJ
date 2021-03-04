//https://codeforces.com/problemset/problem/242/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,i;
    cin >> n;
    long long int x,y,min = 10000000000000, max=0, a,b,ind = -1;

    for(int i=1; i<=n; i++) {
        cin >> x >> y;

        if(x<min) {
            min = x;
        }
        if(y>max) {
            max = y;
        }
        if((x==min) && (y==max) ) {
            a = x;
            b = y;
            ind = i;

        }
    }

    if((a != min) || (b != max)) {
        ind = -1;
    }

    cout << ind;

    return 0;

}