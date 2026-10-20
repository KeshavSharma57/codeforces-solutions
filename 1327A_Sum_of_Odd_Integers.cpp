#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        long long n,k;
        cin>>n>>k;
        if(n%2==k%2&&n>=k*k){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        t--;
    }
    return 0;
}