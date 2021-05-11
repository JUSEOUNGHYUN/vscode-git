#include <stdio.h>

int main() {

    int a,b,i,j,arr[100],cnt=0;
    scanf("%d",&a);

    for(i=0; i<a; i++) {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&b);

    for(j=0; j<a; j++){
        if(arr[j]==b)
        cnt++;
}
    printf("%d\n",cnt);
}