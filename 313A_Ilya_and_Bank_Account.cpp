#include<bits/stdc++.h>
using namespace std; int main(){
    long long n;cin>>n;
    if(n>0)cout<<n;
    else{
        long long b=n%10;
        long long a=n/100;
        long long k=a*10+b;
        long long q=n/10;
        cout<<max(k,q)<<endl;
    return 0;
    }
}