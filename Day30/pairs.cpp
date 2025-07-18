#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;


bool compare ( pair<int,int> p1, pair<int,int> p2){

    return p1.second < p2.second; //ascending.



}
int main(){


    vector<int> start = {0,1,2};
    vector<int> end = {9,2,4};

    vector<pair<int,int>> act(3, make_pair(0,0)); //initialize vector of pairs with 0,0 pair values.
    act[0] = make_pair(0,9);
    act[1] = make_pair(1,2);
    act[2] = make_pair(2,4);

    for ( int i = 0; i<act.size(); i++){

        cout<<act[i].first<<", "<<act[i].second<<endl;
    }


    sort(act.begin(), act.end(), compare);


    for ( int i = 0; i<act.size(); i++){

        cout<<act[i].first<<", "<<act[i].second<<endl;
    }


    return 0;
}
