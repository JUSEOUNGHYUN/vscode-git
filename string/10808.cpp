#include <iostream>
#include <string>

using namespace std;

int main() {

    string str;
    cin>>str;

    int arr[26]={0,};       // 알바벳 개수를 넣기 위한 배열
    int tmp;                // 알파벳이 문자니까 문자를 int형식으로 arr배열에 들어가기 위해 변수를 하나 더 지정한다.

    int len = (int)str.length();

    for(int i=0; i<len; i++){
        if(str[i]>=97&&str[i]<=122){    // str[i]의 배열에서 소문자 일경우
            tmp=str[i]-97;              // str[i]의 소문자가 int배열에 들어가기위해 -97을 해준다.
                                        // str[i]소문자가 정수 tmp로 바뀜
            arr[tmp]+=1;                // tmp
        }
    }

    for(int i=0; i<26; i++){
        cout<<arr[i]<<" ";  
    }

    return 0;
}