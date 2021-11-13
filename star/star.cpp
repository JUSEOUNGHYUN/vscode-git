#include <iostream>

using namespace std;

int main() {

    int test;
    cin>>test;

    int m=1;
    int n=1;
    int b=1;

    for(int i=0; i<test; i++){
        for(int j=0; j<test*3-2-i; j++){
            cout<<" ";
        }
        for(int j=0; j<i*2+1; j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    for(int i=0; i<test; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=i; j<test*5+3-m; j++){
            cout<<"*";
        }
        m++;
        cout<<"\n";
    }

    for(int i=0; i<test-1; i++){
        for(int j=0; j<test-2-i; j++){
            cout<<" ";
        }
        for(int j=0; j<(i+20)+n; j++){
            cout<<"*";
        }
        n++;
        cout<<"\n";
    }

    for(int i=0; i<test; i++){
        for(int j=0; j<test*2-1+i; j++){
            cout<<" ";
        }
        for(int j=i; j<test*2-b; j++){
            cout<<"*";
        }
        b++;
        cout<<"\n";
    }
    return 0;
}
 
/*
             *
            ***
           *****
          *******
         *********
***************************
 *************************
  ***********************
   *********************
    *******************
   *********************
  ***********************
 *************************
***************************
         *********
          *******
           *****
            ***
             *
             */