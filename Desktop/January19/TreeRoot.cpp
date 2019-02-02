#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n+1), b(2*n);
		for(int i=1;i<=n;i++){
			int x, y;
			cin>>x>>y;
			a[x]=y;
			++b[y];
		}
		for(int i=1;i<=n;i++){
			if(b[i]==0)continue;
		}
	}
}