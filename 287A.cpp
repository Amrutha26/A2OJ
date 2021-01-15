//IQ Test
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[4][4];
    for (int i = 0; i < 4; i++) {
        cin >> s[i];
    }
    int x = 0, n = 4;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (s[i][j] == s[i][j + 1] && s[i][j] == s[i + 1][j]) x = 1;
            else if (s[i][j] == s[i + 1][j] && s[i][j] == s[i + 1][j + 1]) x = 1;
            else if (s[i][j + 1] == s[i + 1][j + 1] && s[i + 1][j] == s[i][j + 1]) x = 1;
        }
    }
    if (x) cout << "YES" << endl;
    else cout << "NO" << endl;
 
	return 0; 
}