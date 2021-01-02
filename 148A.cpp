//Insomnia cure
#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,j,k,l,m,n,d,count;
    cin >> k >> l >> m >> n >> d;
    int arr[d];
    count = 0;
    for(i=0,j=1;i<d;i++,j++){
        arr[i] = j;
    }
    for(i=0;i<d;i++) {
        if(arr[i]%k==0 || arr[i]%l==0 || arr[i]%m==0 || arr[i]%n==0) {
            count++;
        } 
    }
    cout << count;
    return 0;
}