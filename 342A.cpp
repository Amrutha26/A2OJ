//Xenia and Divisors
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, x;
    int numbers[8] = {};
    bool solution = true;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> x;
        numbers[x] += 1;
    }
 
    if (numbers[7] > 0 || numbers[5] > 0){
        solution = false;
    } else if (numbers[1] != n/3){
        solution = false;
    } else if (numbers[2] < numbers[4]){
        solution = false;
    } else if ((numbers[2] + numbers[3]) != (numbers[6] + numbers[4])){
        solution = false;
    }
 
    if (!solution){
        cout << -1;
    } else {
        for (int i = 0, n = numbers[4]; i < n; i++){
            cout << "1 2 4" <<'\n';
            numbers[2] -= 1;
        }
        for (int i = 0, n = numbers[2]; i < n; i++){
            cout << "1 2 6" << '\n';
        }
        for (int i = 0, n = numbers[3]; i < n; i++){
            cout << "1 3 6" << '\n';
        }
    }
}
