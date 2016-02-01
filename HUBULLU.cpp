#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, p, tc;
  std::ios::sync_with_stdio(false);

  cin >> tc;

  while (tc--)
	{
	  cin >> n >> p;  
	  if (!p)
		cout << "Airborne wins." << endl; //p1
	  else
		cout << "Pagfloyd wins." << endl; //p2
	}
  
  return 0;
}
