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


    if ( nodes[idx] == -1){

        return NULL;
    }

    Node * currNode = new Node(nodes[idx]);//1

    currNode -> left = buildTree(nodes);//2
    currNode -> right = buildTree(nodes);//3

    return currNode;

}

void preorder(Node * root){

    if (root == NULL){
        return;
    }
    cout<<root->data<<" ";

    preorder(root -> left);
    preorder(root->right);
}




int main(){


    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

    Node * root = buildTree(nodes);

    cout<<"root = "<<root->data<<endl;

    preorder(root);

    cout<<endl;
    return 0;
}
