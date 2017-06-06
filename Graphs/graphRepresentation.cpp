#include<bits/stdc++.h>
using namespace std;
#define MAXN 10000
int AM[MAXN][MAXN]={0};
int main()
{
    vector <int> G[MAXN];
    int i,j,k,l,N,E,u,v;
    cout<<"Enter the number of nodes: ";
    cin>>N;
    cout<<"Enter the number of edges: ";
    cin>>E;
    cout<<"Enter the edges in form of node connected to second node: ";
    for(i=0;i<E;i++)
    {
        cin>>u>>v;
        //undirected need to push in two ways
        G[u].push_back(v);
        G[v].push_back(u);
        //for directed G[u].push_back(v)
        AM[u][v] = 1;
        AM[v][u] = 1;
        // for directed AM[u][v]
    }
    cout<<"Output of adjacency list: \n";
    for(i=1;i<=N;i++)
    {
        for(j=0;j<G[i].size();j++)
            cout<<G[i][j]<<" ";
        cout<<endl;
    }
    cout<<"Output of Adjacency Matrix :\n";
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N;j++)
            cout<<AM[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
