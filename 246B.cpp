// Increase and Decrease
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int a[n];long long sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%n==0) cout<<n;
    else cout<<n-1;
 
    return 0;
}