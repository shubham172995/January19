//This is wrong since in line 33, I only check if parent is non zero. Now, suppose it is non-zero and the child has zero cats. Then, it will first push the children of this child and then, when it will go to its child, it will discover that the previous node was zero and will continue if the previous child had more than one children and then, we can have wrong answer since it will reject this path totally in that case. I have put conditions wrongly. First it shoould check if parent has zero value of cats and if the value is less than "m" and then, go forth. Visualize this. Correct one is written below.

/*#include<bits/stdc++.h>

std::vector<int> a(100005);std::vector<int> b[100005];std::vector<int> dis(100005), par(100005), col(100005);
int n, m,x, y, ans;
std::stack<int> s;

int main(){
	
	scanf("%d %d", &n, &m);
	
	for(int i=1;i<=n;i++)
		scanf("%d", &a[i]);
	a[0]=0;
	
	for(int i=1;i<n;i++){
		
		scanf("%d %d", &x, &y);
		b[x].push_back(y);
		b[y].push_back(x);
	}
	int t;t=0;
	//printf("%d\n%d\n", b[1].size(), col[1]);
	s.push(1);
	col[t]=1;
	dis[1]=0;
	dis[0]=0;
	while(!s.empty()){
		t=s.top();
		s.pop();
		col[t]=1;
		if(a[par[t]]!=0)
		dis[t]=a[t]+dis[par[t]];
		else if(dis[par[t]]<m && a[par[t]]==0) dis[t]=a[t];
		if(dis[t]>m)continue;
		if(b[t].size()==1&&t!=1)
			if(dis[t]<=m)
				++ans;
		for(int i=0;i<b[t].size();i++){
			if(col[b[t][i]]==0){
				s.push(b[t][i]);
				par[b[t][i]]=t;
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}*/

#include<bits/stdc++.h>

std::vector<int> a(100005);std::vector<int> b[100005];std::vector<int> dis(100005), par(100005), col(100005);
int n, m,x, y, ans;
std::stack<int> s;

int main(){
	
	scanf("%d %d", &n, &m);
	
	for(int i=1;i<=n;i++)
		scanf("%d", &a[i]);
	a[0]=0;
	
	for(int i=1;i<n;i++){
		
		scanf("%d %d", &x, &y);
		b[x].push_back(y);
		b[y].push_back(x);
	}
	int t;t=0;
	s.push(1);
	col[t]=1;
	dis[1]=0;
	dis[0]=0;
	while(!s.empty()){
		t=s.top();
		s.pop();
		col[t]=1;
		if(a[t])dis[t]=a[t]+dis[par[t]];
		if(dis[t]>m)continue;
		if(b[t].size()==1&&t!=1)
			if(dis[t]<=m)
				++ans;
		for(int i=0;i<b[t].size();i++){
			if(col[b[t][i]]==0){
				s.push(b[t][i]);
				par[b[t][i]]=t;
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}


