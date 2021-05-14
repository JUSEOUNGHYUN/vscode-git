#include <stdio.h>

int main() {

int a,b,cnt;
int x,y;
scanf("%d %d",&a,&b);
x=a;
y=b;

while(1){
    if(a%b!=0){
        cnt = a%b;
        a=b;
        b=cnt;
    }
    else break;
}

printf("%d\n",b);
printf("%d",x*y/b);


}