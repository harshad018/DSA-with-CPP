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
};

int main(){


    Graph graph(10);

    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(1,3);
    graph.addEdge(1,4);
    graph.addEdge(2,5);
    graph.addEdge(2,6);
    graph.addEdge(3,7);
    graph.addEdge(4,8);
    graph.addEdge(5,9);
    graph.addEdge(6,9);
    graph.addEdge(7,8);
    


    vector<bool> vis(10,false);

     
    cout<<graph.hasPath(0, 1,vis)<<endl;
    return 0;
}