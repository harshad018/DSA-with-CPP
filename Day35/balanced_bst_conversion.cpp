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

Node * buildBSTFromSorted(vector<int> arr, int st, int end){


    if ( st > end){
        return NULL;
    }
    int mid = st + ( end - st)/2;

    Node * curr = new Node ( arr[mid]);

    curr -> left = buildBSTFromSorted(arr, st, mid-1);
    curr -> right = buildBSTFromSorted( arr, mid+ 1, end);

    return curr;
}

void preorder( Node * root){

    if ( root == NULL ){
        return;
    }

    cout<<root->data<<" ";
    preorder( root -> left);
    
    preorder( root -> right);
}

void inorder(Node * root, vector<int> &inorderarr){



    if ( root == NULL){
        return;
    }

    inorder( root -> left, inorderarr);
    inorderarr.push_back(root ->data);
    inorder( root -> right, inorderarr);


    

}

int main(){

    Node * root = new Node(6);

    root -> left = new Node(5);

    root -> left -> left = new Node(4);

    root -> left -> left -> left = new Node(3);

    root -> right = new Node (7);
    root -> right -> right = new Node(8);
    root -> right -> right -> right = new Node(9);


   

   vector<int> inorderarr = {};

    

     inorder(root, inorderarr);

     Node * curr = buildBSTFromSorted( inorderarr, 0, inorderarr.size()-1);

    preorder(curr);
    return 0;
}
 