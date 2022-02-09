#include <iostream>

using namespace std;

int main() {

    int test;
    cin>>test;

    for(int k=0; k<test; k++){

        int n;
        cin>>n;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==0||i==n-1||j==0||j==n-1){
                    cout<<"#";
                }
                else{
                    cout<<"J";
                }
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}

/* n = 3

###
#J#
###

n = 4

####
#JJ#
#JJ#
####

*/