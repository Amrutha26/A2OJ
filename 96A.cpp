//Football
#include <bits/stdc++.h>
using namespace std;

int main() {
    int count;
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++) {
        count = 0;
        for(int j=i; j < s.length(); j++) {
            if(s[i] == s[j]) {
                count++;
            } 
            else {
                break;
            }
        }

        if(count == 7) {
            break;
        }
    }

    if(count == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}