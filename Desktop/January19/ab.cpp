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
		vector<string> name(3); vector<char> leader(3);int x=0,k=0, y;
		for(int j=0;j<3;j++){
		cin>>y>>name[j]>>leader[j];
		if(leader[j]=='Y')
			k=j;
		x=(y-1)*3;
		}
		teams[x]=name[k];
		int t1, t2;
		if(k==0){t1=1;t2=2;}
		else if(k==1){t1=0;t2=2;}
		else {t1=0;t2=1;}
		if(name[t1].compare(name[t2])>0){
			teams[x+1]=name[t2];
			teams[x+2]=name[t1];
		}
		else{
			teams[x+1]=name[t1];
			teams[x+2]=name[t2];
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