#include<iostream>

using namespace std;

class Node{




    public:
    int data;
    Node * next;
    Node(int val){
        data = val;
        next = NULL;
    }

    ~Node(){
        cout<<"~Node"<<data<<endl;
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};


class List{

    Node * head;
    Node * tail;

    public:
        List(){
            head = NULL;
            tail = NULL;
        }

        ~List(){
            cout<<"~List"<<endl;
            if(head != NULL){
                delete head;
                head = NULL;
            }
        }

        void push_front(int val){
            Node * newNode = new Node(val);

            if ( head == NULL ){
                head = newNode;
                tail = newNode;
            }else{
                newNode->next = head;
                head = newNode;

            }
        }

        void printList(){
            Node * nodeptr;

            for ( nodeptr = head; nodeptr != NULL; nodeptr = nodeptr->next){
                cout<<nodeptr->data<<endl;
            }
        }

        void insert(int val, int pos){
            Node* newNode = new Node(val);
            Node* temp = head;
            for ( int i = 0; i < pos - 1; i++){
                if ( temp == NULL){
                    cout<<"Position is invalid"<<endl;
                    return;
                }
                temp = temp -> next;
            }

            newNode -> next = temp -> next;

            temp->next = newNode;
        }

        void pop_front(){


            if ( head == NULL){
                cout<<"LL is empty"<<endl;
                return;
            }
            Node* temp = head;

            head = head -> next;

            temp -> next = NULL;
            delete temp;
        }

        int helper(Node * temp, int key){

            if ( temp == NULL){
                return -1;
            }
            if ( temp ->data == key){
                return 0;
            }

            int idx = helper(temp->next, key);

            if ( idx == -1){
                return -1;
            }
                return idx + 1;



        }
        int searchRec(int key){
            return helper( head , key);
        }

        void reverse(){
            Node * curr = head;

            Node * prev = NULL;

            while ( curr != NULL){
                Node * next = curr -> next;
                curr -> next = prev;
                //updatations for next ptr
                prev = curr;
                curr = next;
            }

            head = prev;
        }
        int getSize(){
            int sz = 0;

            Node * temp = head;

            while( temp != NULL){
                temp = temp ->next;
                sz++;
            }

            return sz;
        }
        void removeNth(int n){
            Node * prev = head;
            int size = getSize();
            for ( int i = 1; i < (size-n); i++){
                prev = prev ->next;
            }
            Node * toDel = prev -> next;
            prev -> next = prev->next->next;
        }




};


int main(){


    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.reverse();

    ll.removeNth(2);
    ll.printList();





    return 0;
}
