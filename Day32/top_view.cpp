#include<iostream>
#include<vector>
#include<queue>
#include<map>
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

void topView(Node * root){


    queue<pair<Node * , int>> Q;
    map<int,int> m ;//HD, Values

    Q.push(make_pair(root,0));

    while(!Q.empty()){


        pair<Node* , int> curr = Q.front();

        Q.pop();

        Node * currNode = curr.first;

        int currHD = curr.second;

        if( m.count(currHD) == 0){ //HD doesn't exist in map

            m[currHD] = currNode -> data;

        }

        if(currNode -> left != NULL){


            pair<Node * , int> left = make_pair(currNode -> left, currHD - 1);
            Q.push(left);
        }

        if(currNode -> right != NULL){


            pair<Node * , int> right = make_pair(currNode -> right, currHD + 1);
            Q.push(right);
        }


    }

    for( auto it: m){

        cout << it.second << " ";
    }

    cout<<endl;
}



int main(){


    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

    Node * root = buildTree(nodes);

    topView(root);
    return 0;
}
