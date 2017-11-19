#include<bits/stdc++.h>
using namespace std;
#define ll int
ll n,m,q,fir[100005],a[100005],ans[100005];
pair<ll,ll>p[100005];
ll tree[400005];
void buildtree(ll node,ll st,ll en)
{
    if(st==en)
    {
        tree[node]=fir[st];
    }
    else
    {
        ll mid=(st+en)/2;
        buildtree(2*node,st,mid);
        buildtree(2*node+1,mid+1,en);
        tree[node]=max(tree[2*node],tree[2*node+1]);
    }
}
ll query(ll node,ll st,ll en,ll lft,ll rght)
{
    if(rght<st||lft>en)
    return 0;
    else if(st>=lft&&en<=rght)
    return tree[node];
    else
    {
        ll mid=(st+en)/2;
        return max(query(2*node,st,mid,lft,rght),query(2*node+1,mid+1,en,lft,rght));
    }
}
int main()
{
    ll i,j,k,l,r;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cin>>m>>j;
    for(i=1;i<=m;i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>j;
        if(a[j]>0)
        {
            a[j]--;
            if(a[j]==0)
            fir[j]=i;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(fir[i]==0)
        {
            fir[i]=INT_MAX;
        }
    }
    buildtree(1,1,n);
    for(i=1;i<=m;i++)
    {
        l=p[i].first;
        r=p[i].second;
        j=query(1,1,n,l,r);
        if(j!=INT_MAX)
        {
            ans[j]++;
        }
    }
    for(i=1;i<=q;i++)
    {
        ans[i]+=ans[i-1];
    }
    for(i=1;i<=q;i++)
    cout<<ans[i]<<" ";
    return 0;
}