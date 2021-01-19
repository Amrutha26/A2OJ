// Cards with Numbers
#include <bits/stdc++.h>
using namespace std;
  
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
 
    int n;
    cin >> n;
    
    vector <pair<int, int>> a(2 * n);
    vector <pair<int,int>> answer;
    for(int i = 0; i < 2 * n; ++i) {
        int x;
        cin >> x;
        a[i].first = x;
        a[i].second = i + 1;
    }
 
    sort(a.begin(), a.end());
    bool possible = true;
    for(int i = 0; i + 1 < 2 * n; i += 2) {
        if(a[i].first != a[i + 1].first) {
            possible = false;
            break;
        }
        answer.push_back({a[i].second, a[i + 1].second});
    }
    if(!possible) {
        cout << -1 << "\n";
    }
    else{
        for(auto x : answer) {
            cout << x.first << " " << x.second << "\n";
        }
    }
 
}
