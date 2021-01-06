//Magic Numbers
#include <bits/stdc++.h>
using namespace std;

bool is_magic(string num) {
    for(int i=0; i < (int)num.size(); i++) {
        if(num[i]!= '1' && num[i]!= '4') {
            return false;
        }
    }

    if(num[0] == '4') {
        return false;
    }

    if(num.find("444") != num.npos) { //if found in any position
        return false;
    }

    return true;
}

int main() {
    string num;
    cin >> num;

    if(is_magic(num)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}


/*
#include <iostream>
using namespace std;

int main() {
  
  string str2 = "app";
  string str = "an apple";
  
  int found=str.find(str2);

  if (found == string::npos){ //if found is equal to no matches i.e if the str2 is not present in str
    cout << "first 'app' found at: " << int(found) << endl;
  }
}

if (found != string::npos) -> it will print the position of the found string in that particular string

*/
