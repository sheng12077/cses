#include <bits/stdc++.h>
using namespace std;
#define int long long  

int n,m;
int ans=0;
int graph[1001][1001];

void bfs(int x,int y){
    int dx[4]={0,0,-1,1};
    int dy[4]={1,-1,0,0};
    for(int i=0;i<4;i++){
        int tx=x+dx[i];
        int ty=y+dy[i];
        if(tx>=0 and ty>=0 and tx<n and ty<m and graph[tx][ty]==1){
            graph[tx][ty]=-1;
            bfs(tx,ty);
        }
    }
}


signed main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

    int ans=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<m;j++){
            if(s[j]=='#'){
                graph[i][j]=-1;
            }
            else{
                graph[i][j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(graph[i][j]==1){
                bfs(i,j);
                ans++;
            }
        }
    }
    cout<<ans;
}
