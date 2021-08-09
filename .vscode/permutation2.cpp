#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int fact[12]={1,};

int main() {

    for(int i=1; i<10; i++){
        fact[i]=fact[i-1]*i;
    }

    string a;
    int n;

    while(cin>>a>>n){

        cout<<a<<" "<<n<<" = ";

        if(n>fact[a.length()]){
            cout<<"No permutation"<<"\n";
            continue;
        }

        int cnt=0;

        do{
            cnt++;
            if(cnt==n){
                cout<<a<<"\n";
                break;
            }
        }while(next_permutation(a.begin(), a.end()));
    }
    
    return 0;
}