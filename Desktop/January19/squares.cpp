#include<bits/stdc++.h>
using namespace std;

int main(){
	long int n;
	cin>>n;
	long int ans=0;int j=1;
	for(int i=1;j<=n;j=i*i){
		ans=2*i;
		i+=1;
	}
	if(ans!=(2*sqrt(n)))
		ans+=1;
	j=sqrt(n);
	if(n>(j*(j+1)))
		ans+=1;
	cout<<ans<<endl;
	return 0;
}