//k-string
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s;
    int k;
    cin>>k>>s;
    int len=s.size();
    vector<int> arr(26,0);
    for(int i=0;i<len;i++){
        arr[s[i]-'a']++;
    }
    
    for(int i=0;i<26;i++){
        if(arr[i]%k){
            cout<<-1;
            return 0;
        }
    }
    for(int c=0;c<k;c++)
    for(int i=0;i<26;i++){
        for(int j=0;j<arr[i]/k;j++){
            cout<<char('a'+i);
        }
    }
    return 0;
}