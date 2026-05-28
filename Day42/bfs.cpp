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

        void bfs(int src){

            queue<int> q;

            vector<int> Vis(V,false);

            q.push(src);

            Vis[src] = true;

            while( q.size() > 0){

                int u = q.front(); //current vertex;
                
                cout<<u<<" ";
                q.pop();

                list<int> neighbors = l[u];// all the neighbors of the current node

                for (auto v : neighbors){
                    if ( !Vis[v]){

                        Vis[v] = true;
                        q.push(v);
                    }
                }
                
            }
            cout<<endl;
        }
};

int main(){


    Graph graph(5);

    graph.addEdge(0,1);
    graph.addEdge(1,2);
    graph.addEdge(1,3);
    graph.addEdge(2,3);
    graph.addEdge(2,4);
    
    

     
    graph.bfs(0);
    return 0;
}