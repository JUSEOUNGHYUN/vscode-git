#include <stdio.h>

int main() {
	
	int a,b,c,d;
	int sum;
	int max=0,count;
	for(int i=0; i<5; i++) {
		sum=0;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		sum=a+b+c+d;

		if(sum>max){
		max=sum;
		count=i;
	}
	}
	printf("%d %d",count+1,max);
	
	
}