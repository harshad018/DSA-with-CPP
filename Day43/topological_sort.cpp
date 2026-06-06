#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<stack>
using namespace std;

class Graph{

    int V;

    list<int> *l;

    bool isDirected;

    public:

        Graph(int V, bool isDirected){

            this -> V = V;
            l = new list<int> [V];
            this -> isDirected = isDirected;
        }


        void addEdge( int u, int v){

            l[u].push_back(v);

            if(!isDirected){
                l[v].push_back(u);
            }
            
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

        void topologicalSort(){

            stack<int> s;

            vector<bool> vis(V,false);

            for ( int i = 0; i < V; i++){

                if(!vis[i]){
                    topologicalSortHelper(i, vis, s);
                }

            }

            while(!s.empty()){

                cout<<s.top()<<endl;
                s.pop();
            }
        }

       void topologicalSortHelper(int src, vector<bool>  &vis, stack<int> &s){

            vis[src] = true;

            list<int> neighbors = l[src];

            for ( auto v : neighbors){

                if ( !vis[v]){

                    topologicalSortHelper(v, vis, s);
                }
            }
            s.push(src);
       }

       
};

int main(){


   Graph graph(6, true);

   graph.addEdge(2,3);
   graph.addEdge(3,1);
   graph.addEdge(4,0);
   graph.addEdge(4,1);

   graph.addEdge(5,0);
   graph.addEdge(5,2);

   graph.topologicalSort();
    
return 0;

}