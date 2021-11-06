#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 1e9
#define maxn 10000005

int coins[1001];
int dp[1000005];

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,x;
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        cin>>coins[i];
    }
    for(int i=1;i<=x;i++){
        dp[i]=inf;
    }
    for(int i=1;i<=x;i++){
        for(int j=1;j<=n;j++){
            if(i-coins[j]>=0){
                dp[i]=min(dp[i],dp[i-coins[j]]+1);
            }
        }
    }
    if(dp[x]==inf){
        cout<<-1;
    }
    else{
        cout<<dp[x];
    }
}   
