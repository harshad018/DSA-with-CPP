#include<iostream>
#include<vector>
using namespace std;

//create stack using vector
template<class T>
class Stack{

    vector<T> vec;


    public:
       void  push(T val){
            vec.push_back(val);
        }

        void pop(){

            if(isEmpty()){
                cout<<"Stack is empty"<<endl;
                return;
            }
            vec.pop_back();
        }


        T top(){

            // if(isEmpty()){
            //     cout<<"Stack is empty"<<endl;
            //     return 0;
            // }
            int lastIdx = vec.size() -1 ;

            return vec[lastIdx];
        }

        bool isEmpty(){
            return vec.size() == 0;
        }

        void display(){
            for ( int i = 0 ; i< vec.size(); i++){
                cout<<vec[i]<<endl;
            }
        }


}
;

int main(){
    Stack<char> s;

    s.push('c');
    s.push('b');
    s.push('a');


    while(!s.isEmpty()){
        cout<<s.top()<< " ";

        s.pop();
    }



    return 0;
}
