#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a[300000];
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
         scanf("%d", &a[i]);
    }
    sort(a,a+n);

    long long moves = 0;

    for(int i=1; i<=n; i++) {
        moves += abs(1+i - a[i]);
    }
    
    printf("%I64d", moves);

    return 0;

}