#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    for(int k=2;k<=30;k++){
        int val =(1<<k)-1;
        if(n%val==0){
            cout<<n/val<<endl;
            break;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}