#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int pasta;
    int juice;
    double set;

    int pas_min=2000, jui_min=2000;

    for(int i=0; i<3; i++){
        cin>>pasta;
        if(pas_min>pasta){
            pas_min=pasta;
        }
    }

    for(int i=0; i<2; i++){
        cin>>juice;
        if(jui_min>juice){
            jui_min=juice;
        }
    }

    set = pas_min + jui_min;

    cout<<fixed;
    cout.precision(1);
    cout<<set+(set/10);
    

    return 0;
}