#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cout<<i;
            if(i<n){
                cout<<" ";
            }
        }
        cout<<endl;
        t--;
    }
    return 0;
}