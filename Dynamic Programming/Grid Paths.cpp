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
    int k=n+2;
    int grid[k][k];
    bool flag=true;         //特判，第一格可能是柱子，無法進入
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            grid[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char c;
            cin>>c;
            if(c=='.'){
                grid[i][j]=-1;
            }
            else{
                grid[i][j]=0;
            }
        }
    }
    if(grid[1][1]==0){
        flag=false;
    }
    grid[1][1]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(grid[i][j]==-1){
                grid[i][j]=(grid[i-1][j]+grid[i][j-1])%mod;
            }
        }
    }
    if(flag){
        cout<<grid[n][n];
    }
    else{
        cout<<0;
    }
}
