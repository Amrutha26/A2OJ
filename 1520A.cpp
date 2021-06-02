#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
 
int main(){
        ll t;
        cin>>t;
        while(t--){
            ll n,c=1;
            cin>>n;
            string s;
            map<char,int>m;
            cin>>s;
            for(int i=0;i<n;i++){
                m[s[i]]=0;
            }
            for(int i=0;i<n;i++){
                if(s[i] != s[i+1]){
                    m[s[i]]=1;
                    if(m[s[i+1]] ==1){
                        c=0;
                        break;
                    }
                }
                
            }
            if(c==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
}
}
