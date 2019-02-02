#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(2*n-2);
		int k=1;
		for(int i=0;i<a.size();i++){
			if(i<n-1)a[i]=i+1;
			else {a[i]=a[i-k];k+=2;}
			}
		for(int i=0;i<n;i++){
			k=(i+2)*(i+1)/2;
			for(int j=0;j<n;j++){
				cout<<k<<" ";
				if((i+j)<2*n-2)
				k+=a[i+j];
			}
			cout<<"\n";
			}
	}
	return 0;
}