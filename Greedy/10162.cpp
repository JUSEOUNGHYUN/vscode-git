#include <iostream>

using namespace std;

int n;
int cnt1=0, cnt2=0, cnt3=0;
bool flag = true;

int main() {

    cin>>n;

    while(flag){
        if(n>=300){
            cnt1=n/300;
            n%=300;
        }
        else if(n>=60){
            cnt2=n/60;
            n%=60;
        }
        else if(n>=10){
            cnt3=n/10;
            n%=10;
        }
        else{
            flag=false;
        }
    }

    if(!n){
        cout<<cnt1<<" "<<cnt2<<" "<<cnt3;
    }
    else{
        cout<<"-1";
    }
}

/* 300, 60, 10 으로 n을 나누는 최소의 경우의 수*/
