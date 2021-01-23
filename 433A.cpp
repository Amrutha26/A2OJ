//Kitahara Haruki's Gift
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,c1=0,c2=0,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x==100)
        c1++;
        else
        c2++;
    }
    if(c1&1)
    {
        cout<<"NO";
    }
    else if(c1==0 && c2&1)
    {
        cout<<"NO";
    }
    else
    cout<<"YES";
    return 0;
}