#include<bits/stdc++.h>

int main(){
	int n;
	scanf("%d", &n);
	std::vector<int> a(n), b;
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		if(a[i]==0)
			b.push_back(i);
	}
	long long prod=a[0];int ans=0;
	if(n==1&&a[0]!=0){
		printf("%d\n", 1);return 0;}
	else if(n==1&&a[0]==0){
		printf("%d\n", 0);
		return 0;
	}
	if(b.size()==n){
		printf("%d\n", 0);
		return 0;
	}int k=0;
	for(std::vector<int>::iterator it=b.begin(); it!=b.end(); ++it){
		int temp=*it-k;
		ans=ans>temp?ans:temp;
		k=*it+1;
		if(it+1==b.end()&&*it!=n-1){
			temp=n-k;
			ans=ans>temp?ans:temp;
		}
		}
	printf("%d\n", ans);
	return 0;
}