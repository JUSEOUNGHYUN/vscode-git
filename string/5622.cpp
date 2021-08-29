#include <iostream>
#include <string>

using namespace std;

int main() {

    int a[26]={3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};

    string str;
    cin>>str;

    int sum=0;

    for(int i=0; i<str.length(); i++){

        int index=str[i]-65;  //입력받은 영어를 한글자씩 잘라서 -65해주고 index에 접근
        sum+=a[index];
    }

    cout<<sum;

    return 0;

}