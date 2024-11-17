#include<bits/stdc++.h>
using namespace std;
int visited[5];
int bfs(int G[5][5], int node)
{
queue <int> q;
q.push(node);
visited[node]= 1;
printf("%d\n", node); 
while(!q.empty())
{
int v = q.front();
q.pop();
for(int i = 0 ; i<5; i++)
{
    if(G[v][i] == 1 && visited[i] == 0)
    {
        q.push(i);
        visited[i] = 1;
        printf("%d\n", i);
    }
}
}
}
int main()
{
int G[5][5] = {
        {0, 1, 1, 1, 0},
        {1, 0, 0, 0, 1},
        {1, 0, 0, 1, 1},
        {1, 0, 1, 0, 0},
        {0, 1, 1, 0, 0}
    };
    bfs(G, 1);
}