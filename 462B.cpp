//Appleman and Card Game
#include <bits/stdc++.h>
using namespace std;
 
long long n, k, a[26];
char s[100001];                                
long long ans;
 
int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
		a[s[i] - 'A'] ++;
	}
	sort (a, a+26);
	int i = 25;
	while (k >= a[i]){
		ans += a[i] * a[i];
		k -= a[i];
		i--;
	}
	ans += k * k;
	cout << ans;
}