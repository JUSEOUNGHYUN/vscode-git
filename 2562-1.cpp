#include <iostream>

using namespace std;

int main() {

int a[9];
int index1;
int index2;
int max=0, min=100;

for(int i=0; i<9; i++){

    cin>>a[i];

    if(a[i]>max) {
    max=a[i];
    index1=i;
    }

    if(min>a[i]) {
    min=a[i];
    index2=i;
    }
}

    cout<<max<<" "<<index1+1<<" "<<min<<" "<<index2+1;

}