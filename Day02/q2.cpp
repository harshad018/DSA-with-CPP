#include<iostream>


using namespace std;

class Bill{

    float pencil;
    float pen;
    float eraser;

    public:
            void input();
            void bill();




};
void Bill::input(){
    

    cout<<"Enter the cost of pencil: ";
    cin>>pencil;

    cout<<"Enter the cost of pen: ";
    cin>>pen;

    cout<<"Enter the cost of eraser: ";
    cin>>eraser;





}


void Bill::bill(){

    float total = pencil + eraser+ pen;
    float gst = (total*18)/100;
    cout<<"**************Bill**********************"<<endl;
    cout<<"Total cost is: "<<total<<endl;
    cout<<"Payable amount(including GST) = "<<gst+total<<endl;
    cout<<"Visit Again!"<<endl;





}
int main(){
    Bill b;
    b.input();
    b.bill();
    return 0;


}