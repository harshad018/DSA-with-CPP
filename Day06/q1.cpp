#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter then number of iterations n: ";
    cin>>n;

    int flag = 0;

    for(int i = 1; i<= n; i++){

        if(i%2 == 0){
            cout<<"0";
            flag = 0;
        }else{
            flag == 1;
            cout<<"1";
        }
        for(int j = 1; j<= i; j++){
           if(j!= 1 && flag == 1){
            cout<<"0";
            flag = 0;

           }else if (j!= 1 && flag == 0) {
            cout<<"1";
            flag = 1;
           }
        }
        cout<<"\n";
    }
   

    return 0;
}