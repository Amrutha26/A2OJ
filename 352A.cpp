//Jeff And Digits
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int n5=0,n0=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==5){
            n5++;
        }
        else{
            n0++;
        }
    }
    if(n0==0){
        cout<<-1;
    }
    else{
        //no of 5 must be divisible by 9
        //largest number
        for(int i=0;i< n5-n5%9;i++){
            cout<<5;
        } 
        if((n5-n5%9)==0){
            cout<<0;
        }
        else{
            for(int i=0;i<n0;i++){
                cout<<0;
            }
        }
    }
    
    
}