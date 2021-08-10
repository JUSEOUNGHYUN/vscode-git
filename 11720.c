#include <stdio.h>

int main() {

    int n;
    int sum=0;
    char a[100] ={0,};

    scanf("%d",&n);
    scanf("%s",a);

    for(int i=0; i<n; i++){
        sum+= a[i] - '0';
    }


    printf("%d",sum);


}