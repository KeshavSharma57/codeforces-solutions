#include <iostream>
#include <algorithm>
using namespace std;
int dp[205][6000];
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<=k;i++){
        for(int j=0;j<6000;j++){
            dp[i][j]=-1;
        }
    }
    dp[0][0]=0;
    for(int i=0;i<n;i++){
        long long num;
        cin>>num;
        long long t=num;
        int x=0;
        while(t>0&&t%2==0){
            x++;
            t/=2;
        }
        t=num;
        int y=0;
        while(t>0&&t%5==0){
            y++;
            t/=5;
        }
        for(int j=k;j>=1;j--){
            for(int l=5999;l>=y;l--){
                if(dp[j-1][l-y]!=-1){
                    dp[j][l]=max(dp[j][l],dp[j-1][l-y]+x);
                }
            }
        }
    }
    int ans=0;
    for(int l=0;l<6000;l++){
        if(dp[k][l]!=-1){
            ans=max(ans,min(dp[k][l],l));
        }
    }
    cout<<ans<<endl;
    return 0;
}