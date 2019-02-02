#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n+1);unsigned long long days;days=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			days+=a[i];
		}
		long yb, mb, db;
		cin>>yb>>mb>>db;
		long y, m, d;
		cin>>y>>m>>d;
		long diff=y-yb;
		diff-=1;
		//cout<<diff<<endl<<days<<endl;
		if(diff>=1)
		days=days*diff;
		else days=0;
		//cout<<days<<endl;
		days+=a[mb]-db+1;
		//cout<<days<<endl;
		if(y!=yb)
		for(int i=mb+1;i<=n;i++)
			days+=a[i];
		//cout<<days<<endl;
		if(y!=yb)
		for(int i=1;i<m;i++)
			days+=a[i];
		//cout<<days<<endl;
		days+=d;
		//cout<<days<<endl;
		//if(mb%4==0)days+=1;
		if(m==n&&d==a[n]&&y%4==0)days+=1;
		int temp=yb;
		for(int i=yb;i%4!=0;i++)
			++temp;
		//cout<<temp<<endl;
		diff=y-temp-1;
		diff/=4;
		if(diff>0)++diff;
		//cout<<diff<<endl;
		if(diff>=1)
		days+=diff;
		cout<<days<<endl;
	}
	return 0;
}