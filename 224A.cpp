//Parallelepiped
#include <bits/stdc++.h>
using namespace std;

int main() {
    //area of three faces which have a common vertex
    long long int a,b,c;
    cin >> a >> b >> c;
    //3 lengths that have a common vertex
    long long int A,B,C;
    A = sqrt((a*c)/b);
    B = a/A;
    C = c/A;
    cout << (A+B+C)*4 << endl;
    return 0;
}