#include<iostream>
#include<unordered_map>

using namespace std;




int main(){

    unordered_map<string, int> m;

    m["India"] = 150;
    m["US"] = 50; //insertion very much similar to array
    m["China"] = 120;
    m["UK"] = 20;
    cout<<m["India"]<<endl;

    //updation

    m["India"] = 160;

    for ( pair<string, int> country : m){

        cout<<country.first << ", "<<country.second<<endl;
    }

    

    //erase function

    m.erase("India");

    //count function

    if( m.count("India") == 1){

        cout<<"India exists"<<endl;
    }else{
        cout<<"India doesn't exist"<<endl;
    }

    return 0;
}
