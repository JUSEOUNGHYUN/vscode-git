#include <stdio.h>

int main() {

    int a;
    scanf("%d", &a);
    int b,c;
    int ahrt, re;
    for(int i=0; i<a; i++){
        scanf("%d %d",&b,&c);
    if(1<=b && c<=1000)    
    ahrt=b/c;
    re=b%c;
   
    printf("You get %d piece(s) and your dad gets %d piece(s).\n",ahrt,re);
    }
    
}