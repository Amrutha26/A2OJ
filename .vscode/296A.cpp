//https://codeforces.com/contest/296/problem/A

#include <bits/stdc++.h>
 using namespace std;
int a[110],numbers[1100]={0};
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
        numbers[a[i]]++;
    }
    for (int i=1;i<=1000;i++)
    {
        if (numbers[i]>n/2+n%2)
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}