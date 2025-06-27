#include<iostream>
#include<cstring>
using namespace std;

class Student{
    //Properties
    string name;
    float cgpa;

    //Methods
    public:

    void getPercentage(){
        cout << (cgpa * 10) <<endl;
    }

    //setter
    void setName(string n){
        name = n;

    }

    void setcgpa (float c){
        cgpa = c;
    }


    //getters

    string getName(){
        return name;
    }

    float getcgpa(){
        return cgpa;
    }
};



int main(){

    Student s1;
    s1.setName("Harshad");
    s1.setcgpa(9.8);
    s1.getPercentage();
    cout<<s1.getName()<<endl;
    cout<<s1.getcgpa()<<endl;

    cout<<sizeof(s1)<<endl;





    return 0;
}
