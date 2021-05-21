#include <stdio.h>

int main() {

    long long a,b,c;
    scanf("%lld %lld",&a,&b);

    if(a>b){
        c=a-b-1;
        printf("%lld",c);
        for(long long i=b+1; i<a; i++){
            printf("%lld",i);
        }
    }

    else if(b>a){
        c=b-a-1;
        printf("%lld",c);
        for(long long i=a+1; i<b; i++){
            printf("%lld",i);
        }
    }
    else printf("0");
}