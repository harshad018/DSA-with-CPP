#include<iostream>
#include<math.h>
using namespace std;

class Area{

    float radius;


    public:
        void input();
        void area();

};

void Area::input(){

    cout<<"Enter the radius of the circle: ";
    cin>>radius;
}
void Area::area(){


    float area = M_PI * radius * radius;

    cout<<"Area of the circle is: "<<area<<endl;


}

int main(){

    Area a;
    a.input();
    a.area();

    return 0;

}