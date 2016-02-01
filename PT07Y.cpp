#include <iostream>
#include <cstring>

#define BLACK 0
#define GREY 1
#define WHITE 2

using namespace std;

bool flag;
int n;

void dfs (bool *g[10001], int u, short c[])
{

  for (int i=1; i<=n; i++)
	cout << c[i] << " ";
  cout << endl;

	
  if (c[u] == BLACK)
	{
	  c[u] = GREY;
	  for (int i=1; i<=n && flag; i++)
		{
		  if(g[u][i])
			dfs (g, i, c);
		}
	  c[u] = WHITE;
	}
  else if(c[u] == GREY)
	{
	  flag = false;
	}
}

int main()
{
  int m;
  int u, v;
  bool *g[10001];
  short c[10001];
  
  cin >> n >> m;
  
  for(int i=1; i<=n;i++)
	{
	  g[i] = new bool[n];
	  memset (g[i], 0, n);
	}
  
  for (int i=1; i<=m; i++)
  	{
  	  cin >> u >> v;
  	  g[u][v] = 1;
  	  g[v][u] = 1;
  	}

  memset (c, BLACK, n+1);
  flag = true;
  dfs (g, 1, c);

  flag = true;
  for (int i=1; i<=n && flag; i++)
	if (c[i] != WHITE)
	  {
		flag = false;
		cout << c[i] << " ";
	  }
  
  
  if (flag)
	cout << "No tree" << endl;
  else
	cout << "Tree" << endl;
  
  for (int i=1; i<=m; i++)
	delete g[i]; 
}
