#include <iostream>
#include <string>

using namespace std;

int main() {

    char c[20];
    cin>>c;

    int cnt=0, cnt1=0, cnt2=0;

    long a = (long)strtol(c, NULL, 16);
    long b = (long)strtol(c, NULL, 8);

    for(int i=0; i<20; i++){
        if(c[0]=='0'){
            if(c[1]=='x'){
                cnt++;
            }
            else{
                cnt1++;
            }
        }
        else{
            cnt2++;
        }
    }

    if(cnt>=1&&cnt1==0&&cnt2==0){
        cout<<a;
    }
    else if(cnt1>1&&cnt==0&&cnt2==0){
        cout<<b;
    }
    else{
        cout<<atoi(c);
    }
}