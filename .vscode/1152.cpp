#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string str;
    getline(cin, str);

    int cnt=0;
    bool falg = true;        // 공백이 나오면 true로 한다.

    for(int i=0; i<str.length(); i++){
        if(str[i]==' '){
            falg = true;     // 이전까지는 공백이었던 상태
        }
        else if(falg){
            falg = false;    // falg를 false로 바꾸고 단어의 개수를 1만큼 증가시킨다.
            cnt++;           // 다음 공백 전까지는 flag가 false인 상태이므로 단어의 개수가 세어지지 않는다.  
        }
    }

    cout<<cnt;
    return 0;
}