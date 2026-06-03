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
            l[v].push_back(u);
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

       bool isCycle(int src, vector<bool> &vis, int parent){

            vis[src] = true;

            list<int>neighbors = l[src];

            for ( auto v : neighbors){

                if (!vis[v]){
                   if(isCycle(v, vis, src)){

                    return true;
                   }
                }

                else{


                    if(v != parent){

                        return true;
                    }
                }
            }

            return false;
       }
};

int main(){


    Graph graph(10);

    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(0,3);
    graph.addEdge(1,2);
    graph.addEdge(3,4);
    
    


    vector<bool> vis(5,false);

     
    cout<<graph.isCycle(0,vis,-1)<<endl;
    return 0;
}