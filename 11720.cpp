#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n;
    int sum=0;
    char a[100]={0,};

    cin>>n;
    cin>>a;

    for(int i=0; i<n; i++){
        sum+=a[i]-'0';
    }


    cout<<sum;
}