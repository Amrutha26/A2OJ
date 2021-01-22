//Shooshuns and Sequence
#include <iostream>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
	for(int i = k; i < n; i++)
	    if(a[i-1]!=a[i]){
	        cout << -1;
	        return 0;
	    }
	for(int i = k-2; i >= 0; i--){
	    if(a[i]==a[k-1]) continue;
	    else{
	        cout << i+1;
	        return 0;
	    }
	}
	cout << 0;
	return 0;
}