#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        long long a[n],b[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        long long ans=0,s=0,mx=0;
        int m=min((long long)n,k);
        for(int i=0;i<m;i++){
            s+=a[i];
            mx=max(mx,b[i]);
            ans=max(ans,s+(k-1-i)* mx);
        }
        cout<<ans<<endl;
    }
    return 0;
}