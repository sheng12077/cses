#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 1e9
#define maxn 10000005
#define mod 1000000007

int dp[maxn];
int weight[maxn];
int value[maxn];

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>weight[i];
    }
    for(int i=1;i<=n;i++){
        cin>>value[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=m;j>0;j--){
            if(j-weight[i]>=0){
                dp[j]=max(dp[j],dp[j-weight[i]]+value[i]);
            }
        }
    }
    cout<<dp[m];
}   
