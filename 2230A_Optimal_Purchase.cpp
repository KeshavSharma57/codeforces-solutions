#include<bits/stdc++.h>
using namespace std;
long long Ans(long long n,long long a,long long b){
    long long p=n/3;
    long long q= (n-p*3);
    long long ans1=a*n;
    long long ans2= p*b +q*a;
    long long ans3= (p+1)*b;
    long long ans =min(ans1,min(ans2,ans3));
    return ans;
}
int main(){
    long long t; cin>>t;
    while(t>0){
    long long n,a,b;
    cin>>n>>a>>b;
    cout<<Ans(n,a,b)<<endl;
    t--;
}
    return 0;
}