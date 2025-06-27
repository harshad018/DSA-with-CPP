#include<iostream>
#include<list>
using namespace std;

class Node{




    public:
    int data;
    Node * next;
    Node(int val){
        data = val;
        next = NULL;
    }


};


class List{



    public:
    Node * head;
    Node * tail;
        List(){
            head = NULL;
            tail = NULL;
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

        void push_back(int val){
                    Node* newNode = new Node(val);
                    if(head == NULL){
                        head = newNode;
                        tail = newNode;
                        return;
                    }
                    tail->next = newNode;
                    tail = newNode;
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

Node * splitAtMid(Node * head){
    Node * slow = head;
    Node * fast = head;

    Node * prev = NULL;

    while ( fast != NULL && fast -> next != NULL){
        prev = slow;
        slow = slow -> next;

        fast = (fast -> next) -> next;
    }

    if( prev != NULL){
        prev -> next = NULL; //split at mid
    }

    return slow;


}
Node * merge(Node * left, Node * right){
    List ans;

    Node * i = left;

    Node * j = right;

    while ( i != NULL && j != NULL){
        if ( i -> data <= j -> data){
            ans.push_back(i ->data);
            i = i -> next;
        }else{
            ans.push_back(j -> data);
            j = j -> next;
        }
    }

    while ( i != NULL){
            ans.push_back(i ->data);
            i = i -> next;
    }

    while ( j != NULL){
            ans.push_back(j ->data);
            j = j -> next;
    }

    return ans.head;
}
Node *  mergeSort(Node * head){

    if ( head == NULL || head -> next == NULL){
        return head;  //base case
    }
    Node * rightHead = splitAtMid(head);

    Node* left = mergeSort(head);
    Node* right = mergeSort(rightHead);


    return merge(left,right);
}

Node * reverse( Node * head){
    Node * prev = NULL;
    Node * curr = head;
    Node * next = NULL;

    while ( curr != NULL){
        next = curr -> next;
        curr -> next = prev;

        prev = curr;
        curr = next;
    }

    return prev;
}
Node *  zigZag( Node * head){

   Node * rightHead =  splitAtMid(head);
   Node * rightHeadRev = reverse(rightHead);

   //alternate merging : 1st head = head

   Node * left = head;
   Node * right = rightHeadRev;
   Node * tail = right;

   while( left != NULL && right != NULL){

       Node * nextLeft = left -> next;
       Node * nextRight = right -> next;

       left -> next = right;
       right -> next = nextLeft;

       tail = right;

       left = nextLeft;
       right = nextRight;


   }

   if( right != NULL){

   tail -> next = right; //for even number of nodes in ll
   }

   return head;
}
int main(){


    List ll;
     ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.printList();


    ll.head = zigZag(ll.head);

    ll.printList();

    ll.printList();


    return 0;
}
