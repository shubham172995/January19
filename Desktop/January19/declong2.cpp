#include<iostream>
#include<chrono>
#include<cstdlib>
int main(){
	//srand(time(NULL));
	int x=rand()%4;
	if(x==0)x=1;
	printf("%d\n", x);
	std::cout<<std::flush;
	int y;
	scanf("%d", &y);
	int z=1;
	if(y==z)++z;
	printf("%d\n", z);
	std::cout<<std::flush;
	return 0;}
