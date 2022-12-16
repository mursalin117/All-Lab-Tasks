#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int lvl[100005], vis[100005];
vector <vector<int> > vec;
vector <int> d;

int bfs(int u)
{
    int count1 = 0, count2 = 0;
    queue <int> Q;
    Q.push(u);
    vis[u] = 1;
    lvl[u] = 1;
    count1++;
    while(!Q.empty())
    {
        int v = Q.front();
        Q.pop();
        for(auto i = vec[v].begin(); i != vec[v].end(); i++)
        {
            if(vis[*i] == 0)
            {
                vis[*i] = 1;
                if(lvl[v] == 2) { lvl[*i] = 1; count1++; }
                else  { lvl[*i] = 2; count2++;}
            }
        }
    }
    return max(count1, count2);
}

int main()
{
    int t, n, i, x, y, com;
    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        memset(lvl, 0, sizeof lvl);
        memset(vis, 0, sizeof vis);
        scanf("%d", &n);
        vec.assign(n, vector<int>());
        d.assign(d.begin(), d.end());
        for(int j = 0; j < n; j++)
        {
            scanf("%d%d", &x, &y);
            vec[x].push_back(y);
            vec[y].push_back(x);
            d.push_back(x);
            d.push_back(y);
        }
        com = 0;
        for(auto k = d.begin(); k != d.end(); k++)
        {
            if(vis[*k] != 0) com += bfs(*k);
        }
        printf("Case %d: %d\n", i+1, com);
    }
    return 0;
}
