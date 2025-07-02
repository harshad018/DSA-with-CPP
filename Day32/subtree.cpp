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

bool isIdentical( Node * root1, Node * root2){

    if (root1 == NULL && root2 == NULL) {
        return true;
    }
    if (root1 == NULL || root2 == NULL) { // One is NULL, the other is not
        return false;
    }


    if ( root1 -> data != root2 -> data){
        return false;
    }

    return isIdentical(root1 -> left, root2 -> left) &&
    isIdentical(root1 -> right, root2 -> right);
}
bool isSubtree(Node * root, Node * subRoot){



    if ( root == NULL && subRoot == NULL){

        return true;
    }else if ( root == NULL || subRoot == NULL){

        return false;
    }
    if ( root -> data  == subRoot -> data){

        //identical for subtress
        if(isIdentical(root, subRoot)){
            return true;
        }
    }


    int isLeftSubtree = isSubtree(root -> left, subRoot);

    if(!isLeftSubtree){

        return isSubtree(root -> right, subRoot);
    }

    return true;
}


int main(){


    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

    Node * root = buildTree(nodes);

    Node * subRoot = new Node(2);
    subRoot -> left = new Node(4);
    subRoot -> right = new Node(5);

    cout<<isSubtree(root, subRoot)<<endl;
    return 0;
}
