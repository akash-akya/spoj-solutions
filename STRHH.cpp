#include <iostream>
#include <cstring>

using namespace std;

void print_sec(char str[])
{
  int n;
  n = strlen(str);

  for (int i=0; i<n/2; i+=2)
	cout << str[i];
}

int main()
{
  int c, n;
  char str[201];
  
  cin >> c;
  while(c--)
	{
	  cin >> str;
	  n = strlen(str);
	  for (int i=0; i<n/2; i+=2)
		cout << str[i];
	  cout << endl;
	}
}
