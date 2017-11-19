#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	cin>>a>>b;
	int j=0;
	int fwd[100005]={0},bwd[100005]={0};
	for(int i=1;i<=a.size();i++)
	{
		if(j<b.size() && a[i-1]==b[j])
			j++;
		fwd[i]=j;
	}
	j=0;
	for(int i=a.size();i>=1;i--)
	{
		if(j<b.size() && a[i-1]==b[b.size()-j-1])
			j++;
		bwd[i]=j;
	}
	int q,s;
	cin>>q>>s;
	while(q--)
	{
		int x,y;
		cin>>x>>y;
		if(x-1+a.size()-y <b.size()){cout<<"No\n";continue;}
		if(fwd[x-1]+bwd[y+1]>=b.size())cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}