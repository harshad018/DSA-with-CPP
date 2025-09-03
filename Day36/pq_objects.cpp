#include<iostream>
#include<queue>

using namespace std;


class Student{

    public:

    string name;
    int marks;

    Student(string name, int marks){


        this -> name = name;
        this -> marks = marks;

 

    }

    bool operator < ( const Student &obj) const{
        return this->marks < obj.marks;  // this condition decide whether the max heap or min heap.
    }
};



int main(){

    priority_queue<Student> pq ;

    pq.push(Student("aman", 85));
    pq.push(Student("bhumi", 95));

    pq.push(Student("chetan", 65));


    while(!pq.empty()){

        cout<<"top = "<<pq.top().name<<" with marks "<<pq.top().marks<<endl;

        pq.pop();
    }
   

 


    return 0;
}
