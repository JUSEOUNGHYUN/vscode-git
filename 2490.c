#include <stdio.h>

int main() {

   int a;
   int cnt;
   for(int i=0; i<3; i++) {
        cnt=0;                  //한번의 반복문이 끝나면 다음 반복문을 위해서 cnt=0으로 초기화
       for(int i=0; i<4; i++){
           scanf("%d",&a);
           if(a==0)
           cnt++;       //
       }
           if(cnt==0) 
           printf("E\n");
           
           else if(cnt==1)
            printf("A\n");
           
           else if(cnt==2)
           printf("B\n");
           
           else if(cnt==3) 
           printf("C\n");
           
           else if(cnt==4)
               printf("D\n");
           
       
   }
}