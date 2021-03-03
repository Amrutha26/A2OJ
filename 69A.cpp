//Young Physicist

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y, z, xsum = 0, ysum = 0, zsum = 0;
    cin >> n;
    while(n--) {
        cin >> x >> y >> z;
        xsum += x;
        ysum += y;
        zsum += z;
    }

    if(xsum == 0 && ysum == 0 && zsum == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
    
}

//If the sum of the xcoordinates = 0 and applies to both y and z then it is in equilibrium
