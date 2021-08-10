#include <iostream>
#include <string>

using namespace std;

int main() {

    string str;
    int arr[26]={0,};

    int max=0;
    int index=0;
    int count=0;
    char answer;

    cin>>str;

    for(int i=0; i<str.length(); i++){

        str[i]=toupper(str[i]);
            arr[str[i]-65]++;   // 대문자
    }

    // toupper

    for(int i=0; i<26; i++){
        if(arr[i]>max){
            max=arr[i];
            answer=i+65;
        }
        else if (arr[i]==max){
            answer='?';
        }
    }
        cout<<answer<<"\n";

    return 0;
}