#include<iostream>
 
using namespace std;
int main() {
    int a,b,n;
    cin>>a>>b>>n;
 
    unsigned int ans = a;
    bool found = false;
 
    for(int i=0;i<10;i++) {
        if((a*10 + i)%b==0) {
            found = true;
            ans = ans*10 +i;
            break;
        }
    }
 
    if(!found) {
        cout<<"-1"<<endl;
    } else {
        string s = to_string(ans);
        for(int i=1;i<n;i++) {
            s+="0";
        }
        cout<<s<<endl;
    }
    
}