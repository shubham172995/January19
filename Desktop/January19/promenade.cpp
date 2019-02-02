#include<bits/stdc++.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		std::vector<int> w(n);int max=INT_MIN;int ans=0;
		for(int i=0;i<n;i++){
			scanf("%d", &w[i]);
			w[i]+=i;
			if(max<=w[i]){
				max=w[i];
				ans=max;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}