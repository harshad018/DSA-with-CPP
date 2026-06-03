#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;

class Graph{

    int V;

    list<int> *l;

    public:

        Graph(int V){

            this -> V = V;
            l = new list<int> [V];
        }


        void addEdge( int u, int v){

            l[u].push_back(v);
            
        }

        void print(){

            for ( int u = 0 ; u < V; u++){

                list<int> neighbors = l[u];

                cout<<u<< ": ";

                for ( auto v : neighbors){
                    cout<<v<<", ";
                }

                cout<<endl;
            }
        }

       bool hasPath(int src, int dest, vector<bool> &vis){

            if ( src == dest){
                return true;
            }

            vis[src] = true;

            list<int> neighbors = l[src];

            for ( auto v: neighbors){
                if ( !vis[v]){

                    if (hasPath(v, dest, vis)){
                        return true;
                    }
                }
            }

            return false;
       }

       bool isCycleDirected(int src, vector<bool> &vis, vector<bool> &recPath){

            vis[src] = true;
            recPath[src] = true;

            list<int>neighbors = l[src];

            for ( auto v : neighbors){

                if (!vis[v]){
                   if(isCycleDirected(v, vis, recPath)){

                    return true;
                   }
                }

                else{


                    if(recPath[v]){

                        return true;
                    }
                }
            }
            recPath[src] = false;
            return false;
       }
};

int main(){


    Graph graph(3);

    graph.addEdge(0,1);
    graph.addEdge(1,2);
    graph.addEdge(0,2);
    
    
    


    vector<bool> vis(3,false);
    vector<bool> recPath(3,false);

     
    cout<<graph.isCycleDirected(0,vis,recPath)<<endl;
    return 0;
}