#include<iostream>

using namespace std;

int n;

void prime(){

    for( int i = 2; i< n; i++){
        int flag = 0;
        for ( int j = 2 ; j< i; j++){
            if ( i % j == 0){
                flag = 0;
                break;
            }else{
                flag = 1;
            }
        }

        if ( flag == 1){
            cout<<i<<" ";
            flag = 0;
            
        }
    }


}

int main(){
    
    cout<<"Enter the value of n: ";
    cin>>n;
    prime();
    return 0;
}