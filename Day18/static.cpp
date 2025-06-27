#include<iostream>

using namespace std;

void counter(){
    static  int count = 0;

    count++;


    cout<<"count: "<< count << endl;
}

int main(){







    return 0;
}
