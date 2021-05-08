#include <stdio.h>

int main() {

    int n;
    int mul=1;
        scanf("%d",&n);
    for(int i=2; i<=n; i++){
        mul*=i;
    }
    printf("%d",mul);
}