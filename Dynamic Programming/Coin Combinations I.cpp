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
    vector<int>dp(x+1,0);
    int coin[105];
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }
    dp[0]=1;
    for(int i=1;i<=x;i++){
        for(int j=0;j<n;j++){
            if(i-coin[j]>=0){
                dp[i]=(dp[i]+dp[i-coin[j]])%mod;
            }
        }
    }
    cout<<dp[x];
}
