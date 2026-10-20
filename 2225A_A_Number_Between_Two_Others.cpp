#include<bits/stdc++.h>
using namespace std;
void Ans(){
    long long x,y;cin>>x>>y;
    if(y-x==1){
        cout<<"NO"<<endl;
        return;
    }
    bool found=false;
    for(long long i=2;i*x<y;i++){
        long long z=i*x;
        if(y%z!=0){
            found=true;
            break;
        }
    }
    if(found){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    long long t;cin>>t;
    while(t--){
        Ans();
    }
    return 0;
}