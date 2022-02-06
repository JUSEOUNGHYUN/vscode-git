#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <sstream>
#include <vector>

using namespace std;

int main() {

    string str;

    while(1){
        getline(cin, str);
        if(str=="EOI"){
            break;
        }

        vector<string> vec;

        string str1[18] = {"nemo","Nemo","nEmo","neMo","nemO","NEmo","NeMo","NemO","nEMo","nEmO","neMO","NEMo","NEmO","NEMo","NEmO","NeMO","nEMO","NEMO"};

        str.erase(remove(str.begin(), str.end(), ','), str.end());
        str.erase(remove(str.begin(), str.end(), '.'), str.end());

        // string으로 입력받은 문자열을 공백 기준으로 문자열을 쪼깼다.
        stringstream ss(str);
        ss.str(str);

        string word;
        while(ss>>word){ // 여기까지
            vec.push_back(word);
        }


        int cnt=0;
        
        for(int i=0; i<vec.size(); i++){
            for(int j=0; j<18; j++){
                if(vec[i]==str1[j]){
                    cnt++;
                }
            }
        }

        if(cnt>=1){
            cout<<"Found\n";
        }
        else{
            cout<<"Missing\n";
        }
    }

}