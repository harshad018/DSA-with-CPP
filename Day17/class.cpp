#include<iostream>

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




};


class User{

    int id;
    string username;
    string password;
    string bio;

    void deactivate(){
        cout << "Deleting account" << endl;
    }

    void addBio(string newBio){
        bio = newBio;
    }



};

int main(){

    Student s1;

    s1.getPercentage();
    cout<<sizeof(s1)<<endl;





    return 0;
}
