#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<stack>
using namespace std;

class Graph{

    int V;

    list<pair<int,int>> *l;

    bool isDirected;

    public:

        Graph(int V, bool isDirected){

            this -> V = V;
            l = new list<pair<int,int>> [V];
            this -> isDirected = isDirected;
        }


        void addEdge( int u, int v,int wt){

            l[u].push_back(make_pair(v,wt));

            if(!isDirected){
                l[v].push_back(make_pair(u,wt));
            }
            
        }

        void primsAlgo(int src){

            priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        
            // (wt,v) -> minHeap; 

            vector<bool> mst(V,false);

            pq.push(make_pair(0,src));

            int ans = 0;

            while ( pq.size() > 0){

                int u = pq.top().second;

                int wt = pq.top().first;

                pq.pop();

                if ( !mst[u]){

                    mst[u] =true;
                    ans += wt;
                    list<pair<int,int>> neighbors = l[u];

                    for ( pair<int,int> n : neighbors){
                        pq.push(make_pair(n.second,n.first)); //since while storing the edge, we stored the vertice in the first place and weight in the secod.
                    }

                }
            }
            cout<<"Final cost of mst: "<<ans<<endl;

        }

       
       
};

int main(){


   Graph graph(6, true);

   graph.addEdge(0,1,10);
   graph.addEdge(0,2,15);
   graph.addEdge(0,3,30);
   graph.addEdge(1,3,40);

   graph.addEdge(2,3,50);

   graph.primsAlgo(0);
   

   

   
    
return 0;

}