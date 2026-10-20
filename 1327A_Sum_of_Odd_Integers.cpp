#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        unsigned long long n,k;
        cin>>n>>k;
        unsigned long long product = k*k;
        if(n>=product && ((n-k)%2==0)) cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";
    }
    return 0;
}