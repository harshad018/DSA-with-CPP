#include<iostream>

using namespace std;

class Interest{

    float principal;
    float rate;

    int time;


    public:
        void input();
        void simple();

       




};

void Interest::input(){
    cout<<"Enter the principal amount: ";
    cin>>principal;

    cout<<"Enter the rate of interest: ";
    cin>>rate;

    cout<<"Enter the time duration: ";
    cin>>time;
}
void Interest::simple(){

    float interest = (principal*rate*time)/100;

    float total = principal + interest;

    cout<<"Total interest on principal: "<<interest<<endl;
    cout<<"Total amount after adding interest: "<<total<<endl;



}




int main(){

    Interest i;
    i.input();
    i.simple();


    return 0;



}