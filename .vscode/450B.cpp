//https://codeforces.com/problemset/problem/450/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y,n;
    cin >> x >> y >> n;
    int arr[7];
    arr[0] = x;
    arr[1] = y;
    arr[2] = y - x;
    arr[3] = -arr[0];
    arr[4] = -arr[1];
    arr[5] = -arr[2];

    int mod = 1000000007;

    cout << (((arr[(n - 1) % 6]) % mod) + mod) % mod << endl;

    return 0;
}