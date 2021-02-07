// Sort the Array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
 
    vector<int> a;
    for(int i=0; i<n; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    
    vector<int> v;
    int start, end;
    int i= 0;
    while(i < (n-1))
    {
        if(a[i] > a[i+1])
        v.push_back(0);
        else
        v.push_back(1);
        i++;
    }
 
    int found = 0;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i] == 0)
        {
            found = 1; start = i;
            break;
        }
    }
 
    if(found == 0)
    cout << "yes" << endl << "1 1" << endl;
    else
    {
        int end;
        for(int i=0; i<v.size(); i++)
        {
            if(v[i] == 0)
            {
                end = i;
            }
        }
        end = end + 1;
 
        reverse(a.begin()+start, a.begin()+end+1);
 
        int flag = 0;
        for(int i=0; i<n-1; i++)
        {
            if(a[i] <= a[i+1])
            continue;
            else
            flag = 1;
        }
 
        if(flag == 1)
        cout << "no" << endl;
        else
        cout << "yes" <<endl << start + 1 << " " << end + 1 << endl;
    }
}