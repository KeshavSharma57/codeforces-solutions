#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    if(t%5==0){
       int ans= t/5;
       cout<<ans;
    }
    else{
        int Ans=(t/5)+1;
        cout<<Ans;
    }
    return 0;
}