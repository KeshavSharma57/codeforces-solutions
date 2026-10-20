#include<bits/stdc++.h>
using namespace std;
int main(){int t;cin>>t;
    while(t>0){
        long long a,b;cin>>a>>b;
        if(a%b==0){
            cout<<0<<endl;
        }else{
            long long k=a/b;
            long long s=(k+1)*b;
            long long ans=s-a;
            cout<<ans<<endl;
        }
        t--;}
        return 0;}