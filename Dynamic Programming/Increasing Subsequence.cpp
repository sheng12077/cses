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
    vector<int>vec(n+1);
    for(int i=1;i<=n;i++){
        cin>>vec[i];
    }
    vector<int>lis;
    lis.push_back(vec[1]);
    for(int i=2;i<=n;i++){
        if(vec[i]>*lis.rbegin()){
            lis.push_back(vec[i]);
        }
        else{
            *lower_bound(lis.begin(),lis.end(),vec[i])=vec[i];
        }
    }
    cout<<lis.size();
}
