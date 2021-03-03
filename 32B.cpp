//Borze

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin >> str;
    string borze = "";
    for(int i = 0; i < (int)str.size(); i++) {
        if(str[i] == '.') {
            borze += '0';
        } else if(str[i] == '-' && str[i+1] == '.') {
            borze += '1';
            i++;
        } else {
            borze += '2';
            i++;
        }
    }

    cout << borze << endl;
    return 0;
}