#include <iostream>

using namespace std;

int main ()
{
  int size, i;
  int a[100000];
  bool amb;
  
  cin >> size;
  while(size != 0)
	{
	  amb = true;

	  for (i=0; i<size; i++)
		{
		  cin >> a[i];
		  a[i]--;
		}

	  for (i=0; i<size; i++)
		if (a[i]!=i && a[a[i]]!=i)
		  {
			amb = false;
			break;
		  }


	  if (amb)
		cout << "ambiguous" << endl;
	  else
		cout << "not ambiguous" << endl;

	  cin >> size;
	}
}
