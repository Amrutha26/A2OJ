//Little Elephant and Bits
#include <iostream>
using namespace std;
 
int main() {
	string s; cin >> s; bool z = 0;
	for (int i = 0; i < s.size() - 1; i++) {
		if (s[i] == '1' || z) cout << s[i];
		else z = 1;
	} if (z) cout << s.back();
	cout << '\n';
}