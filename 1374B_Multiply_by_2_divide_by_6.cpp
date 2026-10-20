#include<iostream>
using namespace std;
int main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
int c2=0,c3=0;
while(n%2==0){c2++;n/=2;}
while(n%3==0){c3++;n/=3;}
if(n!=1||c2>c3){cout<<-1<<endl;}
else{cout<<2*c3-c2<<endl;}
}
return 0;
}