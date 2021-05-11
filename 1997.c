#include <stdio.h>

int main() {

    int a,b;
    int dp[10000];
    int min=10000;
    int sum=0;
    scanf("%d %d", &a,&b);

    for(int i=1; i<=b; i++){
        dp[i]=i*i;
    }

    for(int i=1; i<=b; i++){
        if(a<=dp[i] && dp[i] <=b){
        sum+=dp[i];
        if(min>dp[i])
        min=dp[i];
        }
    }
    if(sum==0)
        printf("-1");
    else printf("%d %d",sum,min);    
    
}