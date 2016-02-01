#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

bool flag = true;
bool g[10000][10000];
int c[10000];
int nodes;

void dfs(int n)
{
  c[n] = 1;
  for (int i=0; i<nodes; i++)
	{
	  if (g[n][i])
		{
		  if (c[i] == 1)
			{
			  flag = false;
			  return;
			}
		  else
			{
			  dfs(i);
			}
		}
	}
  c[n] = 2;
}

int main()
{
  int edges, n1 ,n2;
  
  cin >> nodes >> edges;
  memset(c, 0, 10000);

  for(int i=0; i<1000; i++)
	for (int j=0; i<1000; j++)
	  g[i][j] = false;

  // memset(g, false, 10000*10000);

  // for (int i=0; i<nodes; i++)
  // 	cout << c[i];

  for (int i=0; i<edges; i++)
	{
	  cin >> n1 >> n2;
	  n1--;
	  n2--;
	  g[n1][n2] = true;
	  g[n2][n1] = true;
	  cout << n1 << " - " << n2 << endl;
	}

  c[0] = 1;
  dfs (0);

  if (flag)
	cout << "YES" << endl;
  else
	cout << "NO" << endl;
  
  return 0;
}
