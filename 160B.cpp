//Unlucky Ticket
#include<bits/stdc++.h>
using namespace std;
int main()
{
 
 int n; cin>>n;
 string x;
 cin>>x;
 
sort(x.begin(),x.begin()+n);
sort(x.begin()+n,x.begin()+2*n);
 int asc=0,dsc=0;
 for(int i=0;i<n;i++)
 {
     if(x[i]<x[i+n])
     asc++;
     else if(x[i]>x[i+n])
     dsc++;
 }
 if(asc==n||dsc==n)
 {
     cout<<"YES";
 }
 else
 {
     cout<<"NO";
 }
return 0;
}