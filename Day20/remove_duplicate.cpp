#include<iostream>

using namespace std;

void removeDuplicate(string str, string ans, int i, bool map[]){
    if ( i == str.size()){
        cout<<"ans: "<<ans<<endl;
        return;
    }
    char ch = str[i];

    int mapIdx = (int) (ch - 'a');

    if(map[mapIdx]){
        removeDuplicate(str,ans, i+1, map);
    }else{
        map[mapIdx] = true;

        removeDuplicate(str,  ans + str[i], i+1, map);


    }

}

int main(){

    string str = "appnnacollege";

    string ans = "";


    bool map[26]  = {false};


    removeDuplicate(str,  ans, 0, map);








    return 0;
}
