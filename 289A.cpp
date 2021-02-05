// Polo the Penguin and Segments
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int x[n], y[n], sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
        if (x[i] == y[i - 1] && i > 0) sum += y[i] - x[i];
        else sum += (y[i] - x[i]) + 1;
    }
    int b = 0;
   
    if (sum % k == 0) cout << ( ( (sum / k)) * k) - sum;
    else cout << ( ( (sum / k) + 1) * k) - sum;
}
