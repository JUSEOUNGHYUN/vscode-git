#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int a,b,sum=0;
    for(int i=0; i<9; i++) {
        scanf("%d",&a);
        sum+=a;
    }
        b=n-sum;
        printf("%d",b);
}