#include <iostream>

using namespace std;

int main() {

    int a[10];
    int input, re=0;

    for(int i=0; i<10; i++){
        cin>>input;
        a[i]=(input%42);
    }

    for(int i=0; i<10; i++){
        int count=0;
        for(int j=0; j<i; j++){
            if(a[i]==a[j])
            count++;
        }
        if (count==0) re++;
    }

    cout<<re;
}