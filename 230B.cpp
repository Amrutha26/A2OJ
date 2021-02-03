//T-Primes
#include <bits/stdc++.h>
using namespace std;
 
bool is_prime(int a)
{
    int a_root = sqrt(a);
    if (a == 1)
        return false;
    for (int k = 2; k <= a_root; k++)
        if (a % k == 0)
            return false;
    return true;
}
 
int main()
{
    int n;
    cin >> n;
 
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
 
        long long root = sqrt(x);
        if (root * root == x && is_prime(root))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}