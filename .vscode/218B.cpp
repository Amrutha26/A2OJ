#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,n1,m;
    cin>>n>>m;
    n1=n;
	int a[m],b[m];
    for(int i=0;i<m;i++)
    cin>>a[i];
	sort(a,a+m);
	for(int i=0;i<m;i++)
    b[i]=a[i];
	int mi=0,ma=0,i=0,j=m-1;
	while(n--)
	{
		mi+=a[i];
		if(--a[i]==0)
        i++;
		ma+=b[j];
		b[j]--;
		sort(b,b+m);
	}
	cout<<ma<<" "<<mi;
}