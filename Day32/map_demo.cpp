#include<iostream>
#include<map>
#include<string>

using namespace std;






int main(){

    map<int, string> m;

    m[101] = "rahul";
    m[110] = "neha";
    m[131] = "rahul";

   for ( auto it : m){

       cout<<"Key: "<<it.first<<endl;
       cout<<"Value: "<<it.second<<endl;
   }

    m[101] = "rajat"; //value gets overwritten; so output will be rajat


        cout<<m[101]<<endl;




    return 0;
}
