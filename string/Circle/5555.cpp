#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string str;
    int n;
    cin>>str>>n;

    int cnt=0;

    for(int i=0; i<n; i++){
        string str1;
        cin>>str1;
        str1+=str1; // keypoint
        if(str1.find(str)!=string::npos){
            cnt++;
        }
    }

    cout<<cnt;
}

// str = ABCD
// str+=str = ABCDABCD

// ABCD CDAB도 cnt에 카운트
// string 원형