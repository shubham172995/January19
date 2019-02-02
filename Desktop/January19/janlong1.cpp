#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	while(t--){
		string s;
		//cin.ignore(numeric_limits<streamsize>::max(),'\n');
		bool flag=false;
		getline(cin, s, '\n');
		int l=s.length();
		for(int i=0;i<=l-3;i++)
			if(s.substr(i, 3)=="not"&&(s[i-1]==' '||i==0)&&(s[i+3]==' '||i+3==l))
			{
				cout<<"Real Fancy\n";
				flag=true;
				break;
			}
		if(!flag)cout<<"regularly fancy\n";
	}
	return 0;
}