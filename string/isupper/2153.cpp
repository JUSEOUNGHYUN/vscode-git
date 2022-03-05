/* 풀이

1. 문자열을 입력받고 각 문자가 대문자인지, 소문자인지 판단한다.
(isupper, islower)
2. 문자가 대문자일 때, 아스키코드 값 A = 65 ~ Z = 90이고 A = 27이 나와야 하기 때문에 - 38을 해준다.  
3. 문자가 소문자일 때, 아스키코드 값 a = 97 ~ z = 122이고 a = 1이 나와야 하기 때문에 - 96을 해준다.
4. 각 문자를 숫자로 변형하여 합을 구한 sum이 소수인지 아닌지 판단한다.
5. 이 문제에서는 1을 편의상 소수로 지정했기 때문에 sum==1이라는 조건을 작성한다.
6. 소수는 자기자신과 1로밖에 나눠지지 않기 때문에 for문을 1부터 sum까지 돌려 cnt가 2일때만 "It is a prime word." 나오게 해준다.
7. 그외 나머지는 "It is not a prime word."로 나오게 해준다.
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

    string str;
    cin>>str;

    int b;
    int sum=0;

    // 풀이 1번
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        // 풀이 2번
        if(isupper(c)){
            b = int(c)-38;
        }
        // 풀이 3번
        else if(islower(c)){
            b = int(c)-96;
        }
        sum+=b;
    }

    int cnt=0;

    // 풀이 4번
    for(int j=1; j<=sum; j++){
        if(sum%j==0){
            cnt++;
        }
    }

    if(cnt==2||sum==1){ // 풀이 5, 6, 7번
        cout<<"It is a prime word.";
    }
    else{
        cout<<"It is not a prime word.";
    }

    return 0;
}


