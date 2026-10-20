#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=0;
        while(n>1){
            if(n%6==0){
                n=n/6;
                ans++;
            }
            else if(n%3==0){
                n=n*2;
                ans++;
            } 
            else{
                break;
            }
        }
        if(n==1){
            cout<<ans<<endl;
        } 
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}