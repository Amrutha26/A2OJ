//Beautiful Year

#include <bits/stdc++.h>
using namespace std;


string stringify(int n) {
    //creating a stringstream object
    stringstream ss;
    //inserting the year
    ss << n;
    string str = ss.str();
    return str;

}

// to check whether the year has distinct digits or not
bool checkCondition(string s) {
    bool flag = true;
    for(int i = 0; i < s.length(); i++) {
        for(int j = i + 1; j < s.length(); j++) {
            if(s[i] == s[j]) {
                flag = false;
                break;
            }
        }
    }
    return flag;
}

int main() {
    //disabling the sync between c and c++ streams
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int y;
    cin >> y;

    while(true) {

         y++;
         //converting an int to a string 
         string year = stringify(y);
         if(checkCondition(year) == true) {
             cout << year;
             break;
         }
    } 
  
    return 0;
}