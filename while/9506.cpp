#include <iostream>

using namespace std;

int main() {

    int n;

    while(1){
        cin>>n;
        if(n==-1){
            break;
        }

        int sum=0, cnt=-1;

        for(int i=n; i>1; i--){
            if(n%i==0){
                sum+=n/i;
            }
        }

        if(sum==n){
            cout<<n<<" = ";

            for(int i=n; i>1; i--){
                if(n%i==0){
                    cnt++;
                    if(cnt++){
                        cout<<" + ";
                    }
                    cout<<n/i;
                }
            }
            cout<<"\n";
        }

        else{
            cout<<n<<" is NOT perfect.\n";
        }
    }

    return 0;
}
