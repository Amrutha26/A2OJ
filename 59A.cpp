//Word

#include <iostream>
 
using namespace std;
 
int main()
{
    string s;
    int upper=0, lower=0;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>91)
        lower++;
        else
        upper++;
    }
    if (upper > lower)
    {
        for (int i=0; i<s.length(); ++i)
        {
            s[i] = toupper(s[i]);
        }
    }
    else
    {
        for (int i=0; i<s.length(); ++i)
        {
            s[i] = tolower(s[i]);
        }
    }
    cout<<s;
}