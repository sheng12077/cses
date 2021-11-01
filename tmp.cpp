#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 1e9
#define maxn 200005

int arr[maxn];
int tr[maxn*4];
void build(int idx,int l,int r){
    if(l==r)tr[idx]=arr[l]; 
    else{
        int m = (l+r)/2;
        build(idx*2,l,m);
        build(idx*2+1,m+1,r);
        int L = tr[idx*2];
        int R = tr[idx*2+1];
        if(L<R)tr[idx]=L;
        else tr[idx]=R;
    }
}
int query(int ql,int qr,int idx,int l,int r){
    if(ql<=l && r<=qr) return tr[idx];
    int m=(r+l)/2;
    if(ql > m){
        return query(ql,qr,idx*2+1,m+1,r);
    }
    else if (qr<=m) {
        return query(ql,qr,idx*2,l,m);
    }
    else{
        int L=query(ql,qr,idx*2,l,m);
        int R = query(ql,qr,idx*2+1,m+1,r);
        if(L<R)return L;
        else return R;
    }
}

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    build(1,1,n);

    int ql,qr;
    for(int i=1;i<=q;i++){
        cin>>ql>>qr;
        cout<<query(ql,qr,1,1,n)<<endl;
    }
}
