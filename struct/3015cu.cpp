#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

typedef struct student{
    char name[20];
    int score;
    int number;
}stu;

bool compare(const stu & a, const stu & b){
    if(a.score==b.score){
        return a.number<b.number;
    }

    else if(a.score>b.score){
        return true;
    }
    else{
        return false;
    }
}

int main() {

    stu str[101];

    int n,m;
    cin>>n>>m;

    for(int i=0; i<n; i++){
        cin>>str[i].name>>str[i].score;
        str[i].number=i;
    }

    sort(str, str+n, compare);

    for(int i=0; i<m; i++){
        cout<<str[i].name<<"\n";
    }

    return 0;
}