#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b,p,q,r,ans;
    cin>>n>>m>>a>>b;
    p=n*a;
    q=(n/m)*b+(n%m)*a;
    r=(n/m+1)*b;
    ans=min(p,min(q,r));
    cout<<ans<<endl;
    return 0;
}