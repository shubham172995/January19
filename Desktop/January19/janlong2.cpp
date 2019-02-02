#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(a==0)
		return b;
	if(b==0)
		return a;
	if(a==b)
		return a;
	if(a>b)
		return gcd(a-b, b);
	return gcd(a, b-a);
}

int main(){
	int t;
	cin>>t;
	while(t--){
	int n, a, b;
	cin>>n>>a>>b;
	vector<long long> m(n);
	int x, y, z;x=y=z=0;
	int temp=0;
	temp=gcd(a, b);
	temp=(a*b)/temp;
	for(int i=0;i<n;i++){
		cin>>m[i];
		if(m[i]%a==0)
			++x;
		if(m[i]%b==0)
			++y;
		if(m[i]%temp==0)
			++z;
	}
	if(x==0){cout<<"ALICE\n";continue;}
	if(y==0){cout<<"BOB\n";continue;}
	if(a==b){
		cout<<"BOB\n";
		continue;
	}
	else if(a<b){
		if(a%b==0){
			cout<<"BOB\n";
			continue;
		}
		else if(a%b!=0){
			x-=z;
			y-=z;
			if(x>=y){
				cout<<"BOB\n";
				continue;
			}
			else{
				cout<<"ALICE\n";
				continue;
			}
		}
	}
	else{
		if(b%a==0){
			--y;
			--z;
			--x;
			if(y){
			cout<<"ALICE\n";
			continue;}
			else{
				cout<<"BOB\n";
				continue;
			}
		}
		else if(b%a!=0){
			--x;
			--y;
			--z;
			x-=z;
			y-=z;
			if(x<=y){
				cout<<"ALICE\n";
				continue;
			}
			else{
				cout<<"BOB\n";
				continue;
			}
		}
	}
}
return 0;
}