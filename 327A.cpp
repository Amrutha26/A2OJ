//Flipping Game

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n],c1=0,max=0,e=0;
	
	for (int i=0;i<n;i++){
		cin >> a[i];
		
		if (a[i]==1){
			c1++;
		}
	}
	e=c1;
	
	for (int i=0;i<n;i++){
		for (int j=i;j<n;j++){
			if (a[j]==1){
				e--;
			}else {
				e++;
			}
				if (e>max){
			max=e;
		}
		}
	     e=c1;
	}
	cout << max << endl;
}