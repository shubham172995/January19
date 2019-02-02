#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int k;
	cin>>k;
	string str;
	bool flag=false;
	for(int i=0;i<s.length();i++)
		if(s[i]=='*'||s[i]=='?')
			continue;
		else
			str+=s[i];
	int l=str.length();
	if(str.length()==k){
		cout<<str<<endl;
		flag=true;
	}
	else if(str.length()>k){
		for(int i=0;i<s.length();i++)
			if(s[i]=='*'||s[i]=='?'){
				--l;
			}
	}
	if(l>k){
		cout<<"Impossible\n";
		flag=true;
	}
	l=str.length();
	if(!flag){
		int temp=0;
		for(int i=0;i<s.length();i++)
			if(s[i]=='*')
				++temp;
		if(temp==0&&l<k){
			cout<<"Impossible"<<endl;
			flag=true;
		}
	}
	if(!flag){
		if(l>k){
			str="";
			int i=0;
			for(i=0;i<s.length();i++){
				if(s[i]!='*'&&s[i]!='?')
					str+=s[i];
				else{
					str.erase(str.end()-1);
					--l;
				}
				if(l==k)break;
				}
				for(i=i+1;i<s.length();i++)
					if(s[i]=='*'||s[i]=='?')
						continue;
					else str+=s[i];
			}
			else if(l<k){
				str="";
				bool f1=false;
				for(int i=0;i<s.length();i++){
					if(s[i]!='*'&&s[i]!='?')
						str+=s[i];
					else if(s[i]=='?')
						continue;
					else{
						if(!f1){
						for(int j=k-l;j>0;j--)
							str+=s[i-1];
						f1=true;
					}
				}
			}
			}
			cout<<str<<endl;}
	return 0;
}