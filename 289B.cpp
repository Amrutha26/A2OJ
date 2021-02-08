// Polo the Penguin and Matrix
#include <bits/stdc++.h>
#define int long long int
using namespace std;
const int N=5005;
const int mod=1e9+7 ;
int dp[N];
vector<int>a;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m,d;
    cin>>n>>m>>d;
    
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
    }
    set<int>s;
    for(i=0;i<a.size();i++)
    {
        s.insert(a[i]%d);
    }
    if(s.size()>1)
    {
        cout<<"-1";
    }
    else
    {
        sort(a.begin(),a.end());
        int x,sum=0;
        x=a.size()/2;
         for(i=0;i<a.size();i++)
         sum+=abs(a[i]-a[x]);
         sum/=d;
         cout<<sum;
    }
}