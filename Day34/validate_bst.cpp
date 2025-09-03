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


Node * insert(Node * root, int val){

    if ( root == NULL){

        root = new Node(val);
        return root;
    }

    if ( val < root -> data){

       root -> left =  insert(root -> left, val);
    }else{

       root -> right =  insert(root -> right, val);
    }

   return root;
}

Node * buildBST(int arr[], int n){

Node * root = NULL;

for ( int i = 0; i < n; i++){


    root = insert(root, arr[i]);
}


return root;

}

void inorder(Node * root){

    if ( root == NULL){

        return ;
    }

    inorder(root -> left);

    cout << root -> data <<" ";

    inorder(root->right);
}


Node * getInorderSuccessor(Node * root){

    while ( root -> left != NULL){

        root = root -> left;
    }

    return root;
}

Node* delNode(Node * root, int val){

    if ( root == NULL){
        return NULL;
    }

    if ( val < root->data){
        root -> left = delNode( root -> left, val);

    }

    else if ( val > root -> data){

        root -> right = delNode( root -> right, val);
    }


    else{



        //root ==val

        //case: 0 children

        if ( root -> left == NULL && root -> right == NULL){

            delete root;
            return NULL;
        }

        //case2: 1 child

        if ( root -> left == NULL || root -> right == NULL){

            return root -> left == NULL ? root -> right: root -> left;
        }


        //case3: 2 children

        Node * IS = getInorderSuccessor(root -> right);

        root -> data = IS -> data;

       root -> right =  delNode(root->right, IS->data);
    }


    return root;
}

void printInRange(Node * root, int start, int end){


    if ( root == NULL){

        return ;
    }

    if ( start <= root ->data&& root -> data <= end){

        cout<<root ->data<<" ";

        printInRange(root->left, start, end);
        printInRange(root -> right,start, end );
    }else if ( root ->data < start){

        printInRange(root -> right, start ,end);
    }else{

        printInRange(root -> left, start , end);
    }
}

void printPath( vector <int>  path){


    cout<<"Path: "<<" ";
     for ( int i = 0 ; i < path.size(); i++){

        cout<<path[i]<<" ";
     }

     cout<<endl;
}
void pathHelper(Node * root, vector<int> & path){


    if ( root == NULL){

        return;
    }
path.push_back(root ->data);

if ( root -> left == NULL && root -> right == NULL){

    printPath(path);

    path.pop_back();
    return;
}


pathHelper(root -> left, path);
pathHelper(root -> right, path);

path.pop_back();

}
void pathToLeaf(Node * root){

    vector<int> path;
   pathHelper(root, path);
}


bool validateHelper( Node * root, Node * min, Node * max){


    if ( root == NULL){
        return true;
    }

    if ( min != NULL && root -> data < min -> data){
        return false;
    }

    if ( max != NULL && root -> data > max -> data){
        return false;
    }


    return validateHelper( root -> left, min, root)
    && validateHelper( root -> right, root , max);
}
bool validateBST(Node * root){

   return validateHelper( root, NULL, NULL);

}

int main(){


   int arr[9] = {8,5,3,1,4,6,10,11,14};

    Node * root = buildBST(arr, 9);

    inorder(root);

    cout<<endl;

    printInRange(root, 5, 12);

    cout<<endl;
 
    pathToLeaf(root);

    cout<<validateBST(root)<<endl;
    cout<<endl; 
    return 0;
}
