#include <stdio.h>

int main() {

    int a[100];
    int sum=0;
    int min=100;
    for(int i=0; i<7; i++) {
        scanf("%d",&a[i]);

        if(a[i]%2==1){
        sum+=a[i];
        if(a[i]<min)
        min=a[i];
        }
    }

    if(sum==0)
    printf("-1");
    else printf("%d %d", sum,min);
}