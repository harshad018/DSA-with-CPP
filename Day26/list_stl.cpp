#include<iostream>
#include<list>
#include<iterator>

using namespace std;




int main(){




    list<int> ll;

    ll.push_back(1);
    ll.push_back(2);

    ll.push_back(3);
    ll.push_back(4);

    ll.pop_front();
    ll.pop_back();

    list<int>::iterator itr; //define iterator

    for ( itr = ll.begin(); itr != ll.end(); itr++){
        cout<<(*itr)<<endl;
    }

    cout<<"Size: "<<ll.size()<<endl;
    cout<<"Head: "<<ll.front()<<endl;
    cout<<"Tail: "<<ll.back()<<endl;



    return 0;
}
