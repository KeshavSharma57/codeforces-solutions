#include<bits/stdc++.h>
using namespace std;
 void Sum(long long n,long long k,long long x){
     long long b=(k*(k+1))/2;
     long long a=n-k;
     long long c=((n*(n+1))/2)-((a*(a+1))/2);
     if(x>=b&&x<=c) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
 }
    int main(){
    int t;cin>>t;
    while(t>0){
    long long n,k,x;
    cin>>n>>k>>x;
    Sum(n,k,x);
    t--;
  }
  return 0;
 }