#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int32_t main()
{
    vector<vector<int>> graph = {
         {0,10,5,5,INF},
         {INF,0,5,5,5},
         {INF,INF,0,INF,10},
         {INF,INF,INF,0,20},
         {INF,INF,INF,5,0}

    };
    int n= graph.size();
    vector<vector<int>> dist =graph;
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(dist[i][k]+dist[k][j]<dist[i][j])
                     dist[i][j]=dist[i][k]+dist[k][j];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(dist[i][j] == INF)
               cout<<"INF ";
            else
               cout<<" "<<dist[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}