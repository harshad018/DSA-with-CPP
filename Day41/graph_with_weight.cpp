#include<iostream>
#include<vector>
#include<list>


using namespace std;


class Graph{

    int V; //no of vertices

    list<pair<int,int>> * l; //pointer of the dynamic array to be created


    public:


        Graph(int V){


            this -> V = V;
            l = new list<pair<int,int>> [V];
        }


        void addEdge(int u, int v, int w){

           

           l[u].push_back({v, w});
           l[v].push_back({u,w});
        }

        void print(){


            for ( int u = 0; u < V ; u ++){

                list<pair<int,int>> neighbours = l[u];

                cout<<u<<": ";

                for ( auto p : neighbours){

                    cout << p.first << "(" << p.second << "),";
                }

                cout<<endl;
            }
        }
};


int main(){


    Graph graph(5);

    graph.addEdge(0, 1, 1);
    graph.addEdge(1, 2, 2);
    graph.addEdge(1, 3, 3);
    graph.addEdge(2, 3, 4);
    graph.addEdge(2, 4, 5);
    
    

    graph.print();          





    return 0;
}