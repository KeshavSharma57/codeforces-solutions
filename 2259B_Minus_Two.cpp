#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
      int n;cin>>n;
      int arr[n];
      int a=0;
      int b=0;
      int c=0;  //aodd b4 c2
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
         a++;
        }
        else if(arr[i]%4==0){
         b++;
        }
        c=n-(a+b);
      }
      cout<<max(a,max(b,c))<<endl;
      t--;
    }
}