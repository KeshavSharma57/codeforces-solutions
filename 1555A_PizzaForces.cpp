#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n<=6){
            cout<<15<<endl;
        }
        else{
            if(n%2!=0){
                n=n+1;
            }
            long long ans=(n*5)/2;
            cout<<ans<<endl;
        }
    }
    return 0;
}