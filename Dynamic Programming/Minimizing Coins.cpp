#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define inf 2e18
#define maxn 100005
#define mod 1000000007

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,x;
    cin>>n>>x;
    int coin[105];
    vector<int>dp(x+1,inf);
    dp[0]=0;
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }
    for(int i=1;i<=x;i++){
        for(int j=0;j<n;j++){
            if(i-coin[j]>=0){
                dp[i]=min(dp[i],dp[i-coin[j]]+1);
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
