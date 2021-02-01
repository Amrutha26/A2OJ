// Easy Number Challenge
#include<bits/stdc++.h>
using namespace std;
 
long long a,b,c,d, sum1;
long long arr[1000001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
 
    for(long long i=1; i<=1000000; i++){
        for(long long j=i; j<=1000000; j+=i){
            ++arr[j];
        }
    }
 
 
    for(long long i=1; i<=a; i++){
        for(long long j=1; j<=b; j++){
            for(long long k=1; k<=c; k++){
                d = i*j*k;
                sum1 = (sum1 + arr[d]) % 1073741824;
            }
        }
    }
    cout<<sum1;
    return 0;
}