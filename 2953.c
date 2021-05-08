#include <stdio.h>

int main() {

    int a;
    scanf("%d",&a);
    int b,c;
    double sum=0;
    for(int i=0; i<a; i++) {

        scanf("%d %d",&b,&c);
        sum+=b%c;
    }
    printf("%.2f", &sum);
}