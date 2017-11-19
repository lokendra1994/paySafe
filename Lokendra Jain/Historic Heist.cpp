#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
		//Variable Declaration
		int N, police[100005]={0},s,d,m,fake,cities[100005][3]={0},i;

		//Input
		cin>>N;
		for(i = 0; i < N; i++){
			cin>>police[i];
		}

		cin>>s>>d;
		cin>>m>>fake;
		
		for(i = 0; i < m; i++){
			cin>>cities[i][0]>>cities[i][1]>>cities[i][2];
		}
		

		//Output
		//cout<<N<<endl;
		//for(i = 0; i < N; i++){
		//	cout<<police[i];
		//}
		//
		//cout<<endl;
		//cout<<s<<d<<endl;
		//cout<<m<<fake<<endl;
		//
		//for(i = 0; i < m; i++){
		//	cout<<cities[i][0]<<cities[i][1]<<cities[i][2]<<endl;
		//}
	} 
	return 0;
}