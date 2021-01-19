//Pythagorean Theorem II
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,cntr=0;cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            int x=sqrt(j*j+i*i);
            if(x<=n&&x*x==(j*j+i*i))cntr++;
        }
    }
    cout<<cntr<<endl;
}