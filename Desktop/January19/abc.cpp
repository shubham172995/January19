#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	int n, q;
	scanf("%d %d", &n, &q);
	vector<string> teams(300000);vector<char> leader(300000);vector<int> in(n);
	for(int i=0;i<(3*n);i++){
		int x;
		cin>>x>>teams[i]>>leader[i];
		if(leader[i]=='Y')
			in[(i/3)]=i%3;
	}
	for(int i=0;i<q;i++){
		int j, k;
		scanf("%d %d", &j, &k);
		if(k==1)
			cout<<teams[((j-1)*3)+in[j-1]]<<endl;
		else if(k==2){
			if(in[j-1]==0){
				if(teams[((j-1)*3)+1].compare(teams[((j-1)*3)+2])>0)
					cout<<teams[((j-1)*3)+2]<<endl;
				else
					cout<<teams[((j-1)*3)+1]<<endl;
			}
			if(in[j-1]==1){
				if(teams[((j-1)*3)].compare(teams[((j-1)*3)+2])>0)
					cout<<teams[((j-1)*3)+2]<<endl;
				else
					cout<<teams[((j-1)*3)]<<endl;
			}
			if(in[j-1]==2){
				if(teams[((j-1)*3)+1].compare(teams[((j-1)*3)])>0)
					cout<<teams[((j-1)*3)]<<endl;
				else
					cout<<teams[((j-1)*3)+1]<<endl;
			}
		}
		else if(k==3){
			if(in[j-1]==0){
				if(teams[((j-1)*3)+1].compare(teams[((j-1)*3)+2])>0)
					cout<<teams[((j-1)*3)+1]<<endl;
				else
					cout<<teams[((j-1)*3)+2]<<endl;
			}
			if(in[j-1]==1){
				if(teams[((j-1)*3)].compare(teams[((j-1)*3)+2])>0)
					cout<<teams[((j-1)*3)]<<endl;
				else
					cout<<teams[((j-1)*3)+2]<<endl;
			}
			if(in[j-1]==2){
				if(teams[((j-1)*3)+1].compare(teams[((j-1)*3)])>0)
					cout<<teams[((j-1)*3)+1]<<endl;
				else
					cout<<teams[((j-1)*3)]<<endl;
			}
		}
	}
}
return 0;
}