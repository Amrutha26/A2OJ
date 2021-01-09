//Boys and Girls
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    fstream input, output;
    input.open( "input.txt", ios::in );
    output.open( "output.txt", ios::out );
    int b, g;
    input >> b >> g;
    if ( g >= b ) {
        while ( b > 0 && g > 0 ) {
            output << "GB";
            b--; g--;
        }
        while ( g > 0 ) {
            output << "G";
            g--;
        }
    } else {
        while ( b > 0 && g > 0 ) {
            output << "BG";
            b--; g--;
        }
        while ( b > 0 ) {
            output << "B";
            b--;
        }
    }
    output << endl;
    return 0;
}