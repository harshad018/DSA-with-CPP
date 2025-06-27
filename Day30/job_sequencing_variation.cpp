#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Job{

    public:
        int idx;
        int deadline;
        int profit;

    Job(int idx, int deadline, int profit){
        this -> idx = idx;
        this -> deadline = deadline;
        this -> profit = profit;
    }

};



int maxProfit(vector<pair<int,int>> pairs){


    int n = pairs.size();
    vector<Job> jobs;


    for ( int i = 0; i < n; i++){

        jobs.emplace_back(i,pairs[i].first, pairs[i].second);
    }

    sort(jobs.begin(), jobs.end(), [](Job &a, Job &b ){

        return a.profit > b.profit;
    });//lamda function

    // Modify this line to print the original index of the job being selected
    cout<<"Selecting Job"<< jobs[0].idx <<endl;
    int profit = jobs[0].profit;
    int safeDeadline = 2;

    for ( int i = 1; i < n; i++){

        if ( jobs[i].deadline >= safeDeadline){

            cout<<"Selecting Job"<<jobs[i].idx<<endl;
            profit += jobs[i].profit;
            safeDeadline++;
        }
    }

    cout<<"Max Profit is: "<<profit<<endl;
    return profit;

}
int main(){

    int n = 4;
    vector<pair<int,int>> jobs(n, make_pair(0,0));

    jobs[0] = make_pair(4,20);
    jobs[1] = make_pair(1,10);
    jobs[2] = make_pair(1,40);
    jobs[3] = make_pair(1,30);

    maxProfit(jobs);

    return 0;
}
