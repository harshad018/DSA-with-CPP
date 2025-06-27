#include<iostream>

using namespace std;

class Student{
    //Properties
    string name;


    //Methods
    public:
    float cgpa;
    void getPercentage(){
        cout << (cgpa * 10) <<endl;
    }
};



int main(){

    Student s1;
    s1.cgpa = 9.8;
    s1.getPercentage();
    cout<<sizeof(s1)<<endl;





    return 0;
}
