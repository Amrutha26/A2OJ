// Pashmak and Flowers
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    long long n,i,max=0,min=0;
    cin >> n;
    long long a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    while(min<n && a[0]==a[min]) {
        min++;
    }
    while(max<n && a[n-1] == a[n-max-1]) {
        max++;
    }
    if(a[0] == a[n-1]) {
        cout << 0 << " " << (n * (n-1))/2;  
    } else {
        cout << a[n-1] - a[0] << " " << min * max;
    }

    return 0;
}





















// n(n-1) / 2 determines the no. of pairs of a given number of items (n).
//https://math.stackexchange.com/questions/2214839/exactly-how-does-the-equation-nn-1-2-determine-the-number-of-pairs-of-a-given
