#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    int test;
    cin>>test;
    cin.ignore();

    for(int i=0; i<test; i++){

        string str;
        getline(cin, str);

        // 문자열을 모두 소문자로 변환
        transform(str.begin(), str.end(), str.begin(), ::towlower);

        int arr[26]={0};
        int cnt=0;
        int len = str.length();

        for(int i=0; i<len; i++){
            cnt=str[i]-97;  // 아스키코드 a=97~z=122
            arr[cnt]++;     
        }
        
        int cnt1=0;

        for(int i=0; i<26; i++){
            if(arr[i]!=0){  // 각 배열에 쓴문자가 있으면
                cnt1++;     // 카운트
            }
        }

        if(cnt1==26){       // 문자를 모두 썼으면,
            cout<<"pangram\n";
        }
        else{
            cout<<"missing ";
            for(int i=0; i<26; i++){
            if(arr[i]==0){
                cout<<char(i+97);   // 다시 문자형으로 바꿔준다.
            }
        }
        cout<<"\n";
        }
    }

    return 0;
}