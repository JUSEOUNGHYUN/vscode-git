#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

    string s;
    getline(cin, s);

    for(int i=0; i<s.length(); i++){
        if(isupper(s[i])){
            s[i]=tolower(s[i]);
            //s[i] += 32;
        }

        else if(islower(s[i])){
            s[i]=toupper(s[i]);
            //s[i] -= 32;
        }
    }

    cout<<s;

    
}

/* 아스키 코드범위 
 - 대문자 x>=65 && x<=90
 - 소문자 x>=97 && x<=122
 - 숫자   x>=48 && x<=57
 */


