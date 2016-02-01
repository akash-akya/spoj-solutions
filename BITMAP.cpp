#include <bits/stdc++.h>
// #include <cstdio>
#define ONE  '1'
#define ZERO '0'

using namespace std;

typedef struct _p
{
  short i;
  short j;
} Pos;

void clear( std::queue<Pos> &q )
{
   std::queue<Pos> empty;
   std::swap( q, empty );
}

int main()
{
  int tc;
  int m,n;
  Pos one;
  char inp[182][185];
  // Pos q[190*190];
  queue<Pos> q;
  short dist[182][185];

  

  // scanf ("%d", &tc);
  cin >> tc;

  while (tc--)
	{
	  // scanf ("%d%d", &n, &m);
	  clear (q);
	  // int f=0,b=-1; 

	  cin >> n >> m;
	  
	  one.i = 1000;
	  one.j = 1000;

	  for (int i=0; i<n; i++)
		{
		  scanf ("%s", inp[i]);
		  for (int j=0; one.i==1000 && one.j==1000 && j<m; j++)
			if (inp[i][j]== ONE)
			  {
				one.i = i;
				one.j = j;
			  }
		  // printf ("%s\n", inp[i]);
		}

	  for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
		  dist[i][j] = 1000;

	  // printf ("%u %u\n", one.i, one.j);

	  // q[++b] = one;
	  q.push(one);
	  while (!q.empty())
		{
		  Pos s = q.front();
		  Pos t;
		  int min;

		  q.pop();
		  // f++;

		  if (inp[s.i][s.j] == ONE)
			{
			  dist[s.i][s.j] = 0;
			  min = 0;
			}
		  else
			{
			  min = dist[s.i][s.j];
			}

		  // printf ("%d  %d : %d\n", s.i, s.j, min);
		  
		  if (s.i<n-1 && (min+1) < dist[s.i+1][s.j])
			{
			  dist[s.i+1][s.j] = min+1;
			  t.i = s.i+1;
			  t.j = s.j;

			  q.push(t);
			  // q[++b] = t;
			}

		  if (s.i>0 && (min+1) < dist[s.i-1][s.j])
			{
			  dist[s.i-1][s.j] = min+1;
			  t.i = s.i-1;
			  t.j = s.j;

			  q.push(t);
			  // q[++b] = t;
			}

		  if (s.j<m-1 && (min+1) < dist[s.i][s.j+1])
			{
			  dist[s.i][s.j+1] = min+1;
			  t.i = s.i;
			  t.j = s.j+1;

			  q.push(t);
			  // q[++b] = t;
			}

		  if (s.j>0 && (min+1) < dist[s.i][s.j-1])
			{
			  dist[s.i][s.j-1] = min+1;
			  t.i = s.i;
			  t.j = s.j-1;

			  q.push(t);
			  // q[++b] = t;
			}
		}

	  
	  for (int i=0; i<n; i++)
		{
		  for (int j=0; j<m; j++)
			cout << (int)dist[i][j] << " ";
			// printf("%d ", dist[i][j]);
		  cout << endl;
		}
	  
	}
  
  return 0;
}
