#include <bits/stdc++.h>
using namespace std;
int d[1000000];
int main() {
	int n, m;
	cin >> n >> m;
	int a[n + 1];
	set<int>s;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for(int i = n; i >= 1; i--)
	{
		s.insert(a[i]);
		d[i] = s.size();
	}
	while(m --)
	{
		int t;
		cin >> t;
		cout << d[t] << endl;
	}
}