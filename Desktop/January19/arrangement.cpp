#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	int n, q;
	scanf("%d %d", &n, &q);
	vector<string> teams(300000);
	for(int i=0;i<n;i++){
		vector<string> name(3); vector<char> leader(3);int x=0, y;
		for(int j=0;j<3;j++){
		cin>>y>>name[j]>>leader[j];
		x=(y-1)*3;
		}
		if(leader[0]=='Y'){
			teams[x]=name[0];
			if(name[1].compare(name[2])>0){
				teams[x+1]=name[2];
				teams[x+2]=name[1];
			}
			else {
				teams[x+1]=name[1];
				teams[x+2]=name[2];
			}	
		}
		else if(leader[1]=='Y'){
				teams[x]=name[1];
			if(name[0].compare(name[2])<0){
				teams[x+1]=name[0];
				teams[x+2]=name[2];
			}
			else {
				teams[x+1]=name[2];
				teams[x+2]=name[0];
			}
		}
		else{
				teams[x]=name[2];
			if(name[0].compare(name[1])>0){
				teams[x+1]=name[1];
				teams[x+2]=name[0];
			}
			else {
				teams[x+1]=name[0];
				teams[x+2]=name[1];
			}
		}
	}
	for(int i=0;i<q;i++){
		int j, k;
		scanf("%d %d", &j, &k);
		cout<<teams[((j-1)*3)+k-1]<<endl;
	}
}
return 0;
}