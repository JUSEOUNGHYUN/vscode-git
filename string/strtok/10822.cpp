// , 를 제외한 문자를 정수형으로 치환후 다 더하는 문제인데 

#include <iostream>
#include <string.h>

using namespace std;

int main() {

    char s[101];
    char *p;

    int ret=0;

    cin>>s;
    p=strtok(s,",");

    while(p!=NULL){
        ret+=atoi(p);
        p=strtok(NULL, ",");
    }

    cout<<ret;

    return 0;
}

//strtok로 ,짜르고 나머지 정수 더하는 코드