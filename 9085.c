#include <stdio.h>

int main() {

    int n,a,b,sum;
    scanf("%d",&n);
for(int i=0; i<n; i++) {
    sum=0;
    scanf("%d", &a);
    for(int j=0; j<a; j++) {
        scanf("%d", &b);
        sum+=b;
    }
    printf("%d\n",sum);
}

}