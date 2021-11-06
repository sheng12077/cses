#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 1e9
#define maxn 10000005
#define mod 1000000007

int dp[1000005];

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=6;j++){
            if(j>i){
                break;
            }
            else{
                dp[i]=(dp[i]+dp[i-j])%mod;
            }
        }
    }
    cout<<dp[n];
}   
