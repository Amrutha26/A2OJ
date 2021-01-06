//Bicycle Chain
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin.tie(0);
    int n=1, m=1, count=0, a[50]={0}, max=0,b;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    cin >> m;
    for(int i=0; i<m; i++) {
        cin >> b;
        for(int j=0; j<n; j++) {
            if(b%a[j]==0) {
                int x = b/a[j];
                if(x>max) {
                    max=x;
                    count=1;
                } else if(x==max) {
                    count+=1;
                    break;
                }
            }
        }
    }

    cout<<count;
    return 0;
}