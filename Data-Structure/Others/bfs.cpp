#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int lvl[100005], vis[100005];

int bfs(int s, int z);

int main()
{
    int n, m, com;

    scanf("%d%d", &n, &m);

    com = bfs(n, m);

    printf("%d\n", com);

    return 0;
}

int bfs(int s, int z)
{
    queue <int> Q;

    Q.push(s);

    lvl[s] = 0;
    vis[s] = 1;

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();

        int a = u * 2;
        if(a > 0 && a <= (2 * z) && vis[a] == 0)
        {
            Q.push(a);
            vis[a] = 1;
            lvl[a] = lvl[u] + 1;
            if(a == z) return lvl[z];
            //cout << a << " = " << lvl[a] << endl;
        }

        int b = u - 1;
        if(b > 0 && vis[b] == 0)
        {
            Q.push(b);
            vis[b] = 1;
            lvl[b] = lvl[u] + 1;
            if(b == z) return lvl[z];
            //cout << b << " = " << lvl[b] << endl;
        }
    }
    return lvl[z];
}
