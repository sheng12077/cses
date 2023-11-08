#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 2e18
#define maxn 1000005
#define mod 1000000007

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int dp[maxn]={0};
    dp[0]=1,dp[1]=1,dp[2]=2,dp[3]=4,dp[4]=8,dp[5]=16,dp[6]=32;
    if(n>6){
        for(int i=7;i<=n;i++){
            for(int j=1;j<=6;j++){
                dp[i]=(dp[i-j]+dp[i])%mod;
            }
        }
    }
    cout<<dp[n];
}
