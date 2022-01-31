#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>


using namespace std;

int main() {

    int test;
    cin>>test;

    for(int i=0; i<test; i++){
        string str;
        cin>>str;

        int sever = str.find('-');
        string str1 = (str.substr(0,sever));
        int bi = stoi(str.substr(sever+1));

        int a, sum=0;
        double b;

        int len = str1.length();

        for(int i=0; i<len; i++){
            char c = str1[i];
            a = int(c) - 65;
            b = a * pow(26, len-i-1);
            sum+=b;
        }

        int num = abs(sum-bi);

        if(num<=100){
            cout<<"nice\n";
        }
        else{
            cout<<"not nice\n";
        }
    }
    return 0;
}

// find, abs, pow, substr