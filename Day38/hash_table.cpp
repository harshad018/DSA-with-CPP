#include<iostream>
#include<vector>

using namespace std;

class Node{
    public:
        string key;
        int val;
        Node *next;

        Node(string key, int val){
            this->key = key;
            this->val = val;
            next = NULL; 
        }

        ~Node(){
            if (next != NULL){
                delete next;
            }
        }
};

class HashTable{
    int totSize; // total size
    int currSize; // current size for rehashing
    Node ** table;

    int HashFunction(string key){
        int idx = 0;
        for (int i = 0; i < key.size(); i++){
            idx = idx + (key[i] * key[i]) % totSize; // Fixed: Added modulo
        }
        return idx%totSize;
    }

    void rehash(){
        Node ** oldTable = table;
        int oldSize = totSize;
        int oldCurrSize = currSize;
        
        totSize = 2 * oldSize;
        currSize = 0; // Reset current size
        table = new Node *[totSize];

        for (int i = 0; i < totSize; i++){
            table[i] = NULL;
        }

        // Copy old values - directly insert without calling insert()
        for (int i = 0; i < oldSize; i++){
            Node * temp = oldTable[i];
            while(temp != NULL){
                int idx = HashFunction(temp->key);
                Node * newNode = new Node(temp->key, temp->val);
                newNode->next = table[idx];
                table[idx] = newNode;
                currSize++;
                temp = temp->next;
            }

            if (oldTable[i] != NULL){
                delete oldTable[i];
            }
        }
        
        delete[] oldTable; // Fixed: Clean up old table array
    }

    public:
    
    HashTable(int size){
        totSize = size;
        currSize = 0;
        table = new Node*[totSize];

        for (int i = 0; i < totSize; i++){
            table[i] = NULL;
        }
    }

    // Destructor to prevent memory leaks
    ~HashTable(){
        for (int i = 0; i < totSize; i++){
            if (table[i] != NULL){
                delete table[i];
            }
        }
        delete[] table;
    }

    void insert(string key, int val){
        int idx = HashFunction(key);
        Node * newNode = new Node(key, val);

        // Fixed: Update table[idx] instead of local head variable
        newNode->next = table[idx];
        table[idx] = newNode;

        currSize++;

        double lambda = currSize / (double)totSize;

        if (lambda > 1){
            rehash();
        }
    }

   void remove(string key) {
    int idx = HashFunction(key);
    Node * temp = table[idx];
    Node * prev = NULL;

    while (temp != NULL) {
        if (temp->key == key) {
            if (prev == NULL) {
                // Removing first node
                table[idx] = temp->next;
            } else {
                // Removing middle/last node
                prev->next = temp->next;
            }
            temp->next = NULL;  // ← ADD THIS LINE: Break the link!
            delete temp;
            currSize--;
            return;
        }
        prev = temp;
        temp = temp->next;
    }
}


    bool exists(string key){
        int idx = HashFunction(key);
        Node * temp = table[idx];

        while (temp != NULL){
            if (temp->key == key){
                return true;
            }
            temp = temp->next;
        }

        return false;
    }

    int search(string key){
        int idx = HashFunction(key);
        Node * temp = table[idx];

        while (temp != NULL){
            if (temp->key == key){
                return temp->val;
            }
            temp = temp->next;
        }

        return -1;
    }

    // Helper function to display the hash table
    void display(){
        for (int i = 0; i < totSize; i++){
            cout << "idx: " << i << "-> ";
            Node * temp = table[i];
            while (temp != NULL){
                cout << "(" << temp->key << ", " << temp->val << ") -> ";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
    }
};

int main(){
    HashTable ht(6);
 
    ht.insert("India", 150);
    ht.insert("China", 150);
    ht.insert("US", 50);
    ht.insert("Nepal", 10);
    ht.insert("UK", 20);

    

    if (ht.exists("India")){
        cout << "India Population: " << ht.search("India") << endl;
    }

    cout << "China Population: " << ht.search("China") << endl;
    cout << "US Population: " << ht.search("US") << endl;

    ht.display();

    ht.remove("China");

    ht.display();
    
    return 0;
}
