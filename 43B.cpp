//Letter
#include <bits/stdc++.h> 
using namespace std;
 
int main() {
	string s;
	getline(cin, s);
	map<char, int> letters;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != ' ') {
			letters[s[i]]++;
		}
	}
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		if (' ' != s[i] && letters[s[i]]-- == 0) {
			cout << "NO";
			exit(0);
		}
	}
	cout << "YES";
	return 0;
}
