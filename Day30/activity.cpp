#include<iostream>
#include<vector>

using namespace std;

int maxActivitie(vector<int> start, vector<int> end){
    //sort on end time. but given already so no need to do it.
    int count = 1;

    int currEndTime = end[0];

    for( int i=1; i<start.size(); i++ ){

        if(start[i] >= currEndTime){

            count++;
            currEndTime = end[i];
        }

    }
    return count;

}

int main(){

    vector<int> start = {1,3,0,5,8,5};
    vector<int> end = {2,4,6,7,9,9};//expected ans = 4



    cout<<maxActivitie(start,  end)<<endl;






    return 0;
}
