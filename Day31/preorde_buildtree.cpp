#include<iostream>
#include<vector>

using namespace std;


class Node{



    public:


        int data;
        Node * left;
        Node * right;
        Node(int data){

            this -> data = data;
            left = right = NULL;
        }

};

static int idx = -1;

Node * buildTree(vector<int> nodes){

    idx++;


    Node * currNode = new Node(nodes[idx]);

    currNode -> left = buildTree(nodes);
    currNode -> right = buildTree(nodes);

}





int main(){


    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};




    return 0;
}
