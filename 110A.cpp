//Nearly Lucky Number

#include <bits/stdc++.h>
using namespace std;

int main() {
    int count = 0;
    char n[1000];
    cin >> n;
    for(int i = 0; i < strlen(n); i++) {
        if(n[i] == '4' || n[i] == '7') {
            count ++;
        }
    }
    if(count == 4 || count == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}