#include<iostream>
using namespace std;


class Graph{
    private:
    int numVertices;
    int adjMatrix[100][100];
    public:
    Graph(int vertices){
        numVertices=vertices;
        for(int i=0;i<numVertices;i++){
            for (int j = 0; j <numVertices ; j++)
            {
                adjMatrix[i][j]=0;
            }
            
        }
    }
    void addEdge(int Start,int end){
        for ( int i = 0; i < numVertices; i++)
        {
            for (int j = 0; j <numVertices; j++)
            {
                adjMatrix[Start][end]=1;
                adjMatrix[end][Start]=1;
            }
            
        }
        
    }
    void display(void){
        for (int i = 0; i < numVertices; i++)
        {
           for (int j = 0; j < numVertices; j++)
           {
            cout<<adjMatrix[i][j]<<"\t";
           }
           cout<<endl;
           
        }
        
    }
};

int main(){
    Graph gp(5);
    gp.addEdge(0,1);
    gp.addEdge(0,2);
    gp.addEdge(1,0);
    gp.addEdge(1,3);
    cout<<"The adjacency matrix is"<<endl;
    gp.display();
    return 0;
}
