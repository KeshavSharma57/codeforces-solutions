#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,a,b;
    cin>>n>>a>>b;
    long long req=6*n;
    if(a*b>=req){
        cout<<a*b<<endl<<a<<" "<<b<<endl;
        return 0;
    }
    long long ans=-1,ans_a=-1,ans_b=-1;
    long long mn=min(a,b),mx=max(a,b);
    for(long long i=mn;i*i<=req;i++){
        long long j=req/i;
        if(req%i!=0) j++;
        if(j<mx)j=mx;
        long long r_area=i*j;
        if(ans==-1||r_area<ans){
            ans=r_area;
            if(a<b){
                ans_a=i;
                ans_b=j;
            }else{
                ans_a=j;
                ans_b=i;
            }
        }
    }
    cout<<ans<<endl<<ans_a<<" "<<ans_b<<endl;
    return 0;
}