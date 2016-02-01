#include <iostream>
#include <bits/stdc++.h>

#define tr(c,i) for(auto i=(c).begin(); i!=(c).end(); i++)

using namespace std;

int main()
{
  vector<int> v(10);
  int i=0;

  tr(v, it)
	  *it = ++i;
  
  tr(v, it)
	cout << *it << " ";
}
