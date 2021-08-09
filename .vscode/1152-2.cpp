#include <iostream>
#include <string.h>

using namespace std;

int main() {

    char str[50];
    cin.getline(str, 50);

    int cnt=1;

    if(str[0]==' '){
        cnt=0;        
    }

    for(int i=0; i<50; i++){
        if(str[i]==' '){
            cnt++;
        }
    }

    if(str[strlen(str)-1]==' '){
        cnt--;
    }

    cout<<cnt;
    return 0;
    
}