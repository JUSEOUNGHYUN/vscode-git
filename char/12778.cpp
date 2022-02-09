#include <iostream>
#include <string>

using namespace std;

int main() {

    int bigtest;
    cin>>bigtest;

    for(int i=0; i<bigtest; i++){

        int test;
        char c;
        cin>>test>>c;

        int b=0;
        char cd=0;

        for(int i=0; i<test; i++){
            if(c=='C'){
                char ch;
                cin>>ch;

                b = int(ch)-64;
                cout<<b<<" ";
            }
            else if(c=='N'){
                int n;
                cin>>n;

                cd = char(n+64);
                cout<<cd<<" ";
            }
        }
            cout<<"\n";
    }
    return 0;
}