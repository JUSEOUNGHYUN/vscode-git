#include <iostream>
using namespace std;

int main() {

    int a,n;
    cin>>n;

    for(int i=0; i<n; i++){
        int sum=0;
        int min=101;
        
        for(int j=0; j<7; j++){
            cin>>a;
            if(a%2==0){
                sum+=a;
                if(min>a)
                min=a;
            }
        }

        cout<<sum<<" "<<min<<'\n';
    }

    return 0;
   
}