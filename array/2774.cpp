#include <iostream>
#include <string>

using namespace std;

int main() {

    int test;
    cin>>test;

    string str;

    for(int i=0; i<test; i++){
    cin>>str;

    int cnt=0;
    int cnt1=0;

    int arr[10]={0, };

    for(int i=0; i<str.length(); i++){
        cnt = str[i]-'0';
        arr[cnt]++;
    }

    for(int i=0; i<=9; i++){
        if(arr[i]!=0){
            cnt1++;
        }
    }
    cout<<cnt1<<"\n";
    }
    return 0;
    }

// ex) 12222522224222224
// 문자열에 쓰인 숫자 종류의 개수 1, 2, 4, 5 == 4