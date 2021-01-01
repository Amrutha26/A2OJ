//Soft Drinking
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    l = k*l;
    int cd = (c * d) / n;
    l = l / n;
    p = p / n;
    cout << min(cd, min((l/nl),(p/np)));
    return 0;
}

//min function can be used to find the minimum of only two quantities. Not more than that.