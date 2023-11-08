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

    int n;
    cin>>n;
    vector<int>dp(n+1,inf);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        int tmp=i;
        while(tmp>0){
            dp[i]=min(dp[i],dp[i-tmp%10]+1);
            tmp/=10;
        }
    }
    cout<<dp[n];
}
