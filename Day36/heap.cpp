#include<iostream>
#include<vector>
#include<string>

using namespace std;



class Heap{


    vector<int> vec;  //max heap


    public:

    void push(int val){

        //step 1

        vec.push_back(val);

        //fix heap

        int x = vec.size() -1; //child
        int parI= (x-1)/2;

        while ( parI >= 0 && vec[x] > vec[parI]){


            swap(vec[x], vec[parI]);

            x = parI;
            parI = (x - 1)/2;
        }



    }

    void heapify(int i){


        if( i >= vec.size()){

            return;
        }

        int l = 2*i +1;
        int r = 2*i +2;

        int maxIdx = i;

        if ( l < vec.size() && vec[l] > vec[maxIdx]){

            maxIdx = l;
        }

        if ( r < vec.size() && vec[r] > vec[maxIdx]){
            maxIdx = r;
        }


        swap(vec[i], vec[maxIdx]);

        if ( maxIdx != i){//to check if swapping is not taken with itself.

            heapify(maxIdx);

        }

    }

    void pop(){

        //swap(root, last)

        swap(vec[0], vec[vec.size()-1]);

        //delete the last node

        vec.pop_back();

        //fix the heap using heapify
        heapify(0);

    }

    int top(){

        return vec[0]; //highest priority element

    }

    bool empty(){

        return vec.size() == 0;

    }

};


int main(){

    Heap heap;

    heap.push(50);
    heap.push(10);
    heap.push(100);

    cout << "top: "<<heap.top()<<endl;

    heap.pop();

    cout << "top: "<<heap.top()<<endl;
    

    return 0;
}
